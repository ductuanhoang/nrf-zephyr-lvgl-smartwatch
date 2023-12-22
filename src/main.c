/*
 * Copyright (c) 2018 Jan Van Winkel <jan.van_winkel@dxplore.eu>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/device.h>
#include <zephyr/devicetree.h>
#include <zephyr/drivers/display.h>
#include <zephyr/drivers/gpio.h>
#include <lvgl.h>
#include <stdio.h>
#include <string.h>
#include <zephyr/kernel.h>
#include <zephyr/drivers/pwm.h>
#include <zephyr/drivers/gpio.h>

#include <ui.h>
#define LOG_LEVEL CONFIG_LOG_DEFAULT_LEVEL
#include <zephyr/logging/log.h>
LOG_MODULE_REGISTER(app);

void run_init_work(struct k_work *item);
static void lvgl_render(struct k_work *item);
static void clock_display(struct k_work *item);

K_WORK_DEFINE(init_work, run_init_work);
K_WORK_DELAYABLE_DEFINE(lvgl_work, lvgl_render);
K_WORK_DELAYABLE_DEFINE(clock_work, clock_display);

#define RENDER_INTERVAL_LVGL K_MSEC(100)
#define RENDER_INTERVAL_CLOCK_TIME K_MSEC(1000)

const struct device *display_dev;

typedef struct
{
	uint16_t hour;
	uint16_t min;
} time_t;

time_t time;

void run_init_work(struct k_work *item)
{
	int err;
	char count_str[11] = {0};

	display_dev = DEVICE_DT_GET(DT_CHOSEN(zephyr_display));
	printk("start project display\r\n");
	if (!device_is_ready(display_dev))
	{
		LOG_ERR("Device not ready, aborting test");
		return;
	}
}

static void lvgl_render(struct k_work *item)
{
	lv_task_handler();
	k_work_schedule(&lvgl_work, RENDER_INTERVAL_LVGL);
}

static void clock_display(struct k_work *item)
{
	printk("clock_display hour = %d --- min = %d\r\n", time.hour, time.min);
	time.hour;
	if (time.min >= 60)
	{
		time.min = 0;
		time.hour++;
	}
	else
		time.min++;
	watchface_set_time(time.hour, time.min, 0);
	k_work_schedule(&clock_work, RENDER_INTERVAL_CLOCK_TIME);
}

#define MY_STACK_SIZE 4096
#define MY_PRIORITY 5

void user_lvgl_task(void *, void *, void *)
{
	ui_init();

	k_work_schedule(&lvgl_work, K_MSEC(1));
	k_work_schedule(&clock_work, K_MSEC(1000));
	while (1)
	{
		k_msleep(5);
	}
}
K_THREAD_STACK_DEFINE(my_stack_area, MY_STACK_SIZE);
struct k_thread my_thread_data;

void main(void)
{

	// general_ui_anim_in(root_page, 100);

	// The init code requires a bit of stack.
	// So in order to not increase CONFIG_MAIN_STACK_SIZE and loose
	// this RAM forever, instead re-use the system workqueue for init
	// it has the required amount of stack.
	k_work_submit(&init_work);
	k_tid_t my_tid = k_thread_create(&my_thread_data, my_stack_area,
									 K_THREAD_STACK_SIZEOF(my_stack_area),
									 user_lvgl_task,
									 NULL, NULL, NULL,
									 MY_PRIORITY, 0, K_NO_WAIT);
}
