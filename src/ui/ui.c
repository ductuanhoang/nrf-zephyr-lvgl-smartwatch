// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: Smartwatch_240_240

#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

///////////////////// VARIABLES ////////////////////
void sec_Animation(lv_obj_t *TargetObject, int delay);
void min_Animation(lv_obj_t *TargetObject, int delay);
void hour_Animation(lv_obj_t *TargetObject, int delay);
void left_Animation(lv_obj_t *TargetObject, int delay);
void right_Animation(lv_obj_t *TargetObject, int delay);
void opa_on_Animation(lv_obj_t *TargetObject, int delay);
void dots_Animation(lv_obj_t *TargetObject, int delay);
void top_Animation(lv_obj_t *TargetObject, int delay);
void cloud_Animation(lv_obj_t *TargetObject, int delay);
void blood2_Animation(lv_obj_t *TargetObject, int delay);
void blood1_Animation(lv_obj_t *TargetObject, int delay);
void heart_Animation(lv_obj_t *TargetObject, int delay);
void ui_event_watch_analog(lv_event_t *e);
lv_obj_t *ui_watch_analog;
lv_obj_t *ui_bg_2;
lv_obj_t *ui_clock;
lv_obj_t *ui_dots;
lv_obj_t *ui_battery_group1;
lv_obj_t *ui_date_group2;
lv_obj_t *ui_day2;
lv_obj_t *ui_month2;
lv_obj_t *ui_year2;
lv_obj_t *ui_clock_group;
lv_obj_t *ui_sec;
lv_obj_t *ui_min;
lv_obj_t *ui_hour;
lv_obj_t *ui_dots_group;
lv_obj_t *ui_dot16;
lv_obj_t *ui_dot17;
void ui_event_blood_oxy(lv_event_t *e);
lv_obj_t *ui_blood_oxy;
lv_obj_t *ui_bg6;
lv_obj_t *ui_title_group_1;
void ui_event_button_round_buttonround(lv_event_t *e);
lv_obj_t *ui_button_round;
lv_obj_t *ui_blood_presure_group;
lv_obj_t *ui_blood_oxygen;
lv_obj_t *ui_percent;
lv_obj_t *ui_pulse_group;
lv_obj_t *ui_arc_spo2;
lv_obj_t *ui_precent_70;
lv_obj_t *ui_precent_100;
lv_obj_t *ui_health_dots_group;
lv_obj_t *ui_dot7;
lv_obj_t *ui_dot6;
lv_obj_t *ui_dot5;
lv_obj_t *ui_dots_group1;
lv_obj_t *ui_dot18;
lv_obj_t *ui_dot19;
void ui_event_ecg(lv_event_t *e);
lv_obj_t *ui_ecg;
lv_obj_t *ui_Image1;
lv_obj_t *ui_bg1;
lv_obj_t *ui_title_group_2;
lv_obj_t *ui_button_down6;
void ui_event_button_round1_buttonround(lv_event_t *e);
lv_obj_t *ui_button_round1;
lv_obj_t *ui_pulse_group1;
lv_obj_t *ui_health_dots_group1;
lv_obj_t *ui_dot9;
lv_obj_t *ui_dot8;
lv_obj_t *ui_dot10;
lv_obj_t *ui_chart_group;
lv_obj_t *ui_chart_ecg;
void ui_event_blood_pressure(lv_event_t *e);
lv_obj_t *ui_blood_pressure;
lv_obj_t *ui_bg2;
lv_obj_t *ui_Image3;
lv_obj_t *ui_title_group_3;
lv_obj_t *ui_button_down7;
void ui_event_button_round2_buttonround(lv_event_t *e);
lv_obj_t *ui_button_round2;
lv_obj_t *ui_blood_presure_group1;
lv_obj_t *ui_blood_oxygen1;
lv_obj_t *ui_pulse_group2;
lv_obj_t *ui_blood_presure_group2;
lv_obj_t *ui_dia_group;
lv_obj_t *ui_dia;
lv_obj_t *ui_mmhg2;
lv_obj_t *ui_blood_oxygen2;
lv_obj_t *ui_health_dots_group2;
lv_obj_t *ui_dot12;
lv_obj_t *ui_dot13;
lv_obj_t *ui_dot11;
void ui_event_measuing(lv_event_t *e);
lv_obj_t *ui_measuing;
lv_obj_t *ui_bg7;
lv_obj_t *ui_pulse_group3;
lv_obj_t *ui_measuring;
lv_obj_t *ui_Spinner2;
lv_obj_t *ui_blood_group;
lv_obj_t *ui_blood1;
lv_obj_t *ui_blood_fill;
lv_obj_t *ui_blood2;
void ui_event_x_button(lv_event_t *e);
lv_obj_t *ui_x_button;
lv_obj_t *ui_x;
///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 1
#error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void sec_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 36000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 3600);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);
}
void min_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 1400);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);
}
void hour_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_angle);
    lv_anim_set_values(&PropertyAnimation_0, 0, 300);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_angle);
    lv_anim_start(&PropertyAnimation_0);
}
void left_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, -100, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, true);
    lv_anim_start(&PropertyAnimation_1);
}
void right_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 150, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 300);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, true);
    lv_anim_start(&PropertyAnimation_1);
}
void opa_on_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 500);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
}
void dots_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 250);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 250);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 250);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 500);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_start(&PropertyAnimation_0);
}
void top_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 400);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, -100, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_ease_out);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
}
void cloud_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, 10);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 1000);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
}
void blood2_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 3000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 0, 166);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);
}
void blood1_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 2000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_x);
    lv_anim_set_values(&PropertyAnimation_0, 166, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_x);
    lv_anim_start(&PropertyAnimation_0);
}
void heart_Animation(lv_obj_t *TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 900);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_zoom);
    lv_anim_set_values(&PropertyAnimation_0, 120, 60);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_zoom);
    lv_anim_start(&PropertyAnimation_0);
}

///////////////////// FUNCTIONS ////////////////////
void ui_event_watch_analog(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOAD_START)
    {
        min_Animation(ui_min, 0);
        hour_Animation(ui_hour, 0);
        opa_on_Animation(ui_date_group2, 500);
    }
}

void ui_event_blood_oxy(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOAD_START)
    {
        top_Animation(ui_blood_presure_group, 0);
        opa_on_Animation(ui_arc_spo2, 100);
        opa_on_Animation(ui_pulse_group, 200);
        opa_on_Animation(ui_button_round, 300);
        opa_on_Animation(ui_blood_presure_group, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT)
    {
        _ui_screen_change(ui_ecg, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_blood_pressure, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_button_round_buttonround(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_measuing, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_ecg(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOAD_START)
    {
        top_Animation(ui_chart_group, 0);
        opa_on_Animation(ui_pulse_group1, 100);
        opa_on_Animation(ui_button_round1, 200);
        opa_on_Animation(ui_chart_ecg, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_blood_oxy, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT)
    {
        _ui_screen_change(ui_blood_pressure, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_button_round1_buttonround(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_measuing, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_blood_pressure(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOAD_START)
    {
        top_Animation(ui_blood_presure_group1, 0);
        opa_on_Animation(ui_blood_presure_group1, 0);
        top_Animation(ui_blood_presure_group2, 100);
        opa_on_Animation(ui_blood_presure_group2, 100);
        opa_on_Animation(ui_button_round2, 200);
        top_Animation(ui_pulse_group2, 100);
        opa_on_Animation(ui_pulse_group2, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT)
    {
        _ui_screen_change(ui_blood_oxy, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
    if (event_code == LV_EVENT_GESTURE && lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT)
    {
        _ui_screen_change(ui_ecg, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_button_round2_buttonround(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_measuing, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
void ui_event_measuing(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_SCREEN_LOAD_START)
    {
        top_Animation(ui_blood_group, 0);
        opa_on_Animation(ui_blood_group, 0);
        opa_on_Animation(ui_Spinner2, 300);
        opa_on_Animation(ui_pulse_group3, 200);
        opa_on_Animation(ui_measuring, 300);
        opa_on_Animation(ui_x_button, 300);
    }
}
void ui_event_x_button(lv_event_t *e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_CLICKED)
    {
        _ui_screen_change(ui_blood_oxy, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0);
    }
}
///////////////////// SCREENS ////////////////////
void ui_watch_analog_screen_init(void)
{
    ui_watch_analog = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_watch_analog, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_watch_analog, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_watch_analog, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bg_2 = lv_img_create(ui_watch_analog);
    lv_img_set_src(ui_bg_2, &ui_img_bg1_png);
    lv_obj_set_width(ui_bg_2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bg_2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bg_2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg_2, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_bg_2, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_zoom(ui_bg_2, 160);

    ui_clock = lv_label_create(ui_watch_analog);
    lv_obj_set_width(ui_clock, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_clock, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_clock, 2);
    lv_obj_set_y(ui_clock, 75);
    lv_obj_set_align(ui_clock, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_clock, "03   27");
    lv_obj_set_style_text_color(ui_clock, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_clock, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_clock, &ui_font_H1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dots = lv_label_create(ui_watch_analog);
    lv_obj_set_width(ui_dots, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_dots, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_dots, 2);
    lv_obj_set_y(ui_dots, 72);
    lv_obj_set_align(ui_dots, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_dots, ":");
    lv_obj_set_style_text_color(ui_dots, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_dots, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_dots, &ui_font_H1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_battery_group1 = ui_battery_group_create(ui_watch_analog);
    lv_obj_set_x(ui_battery_group1, 0);
    lv_obj_set_y(ui_battery_group1, 20);

    ui_date_group2 = lv_obj_create(ui_watch_analog);
    lv_obj_set_width(ui_date_group2, 133);
    lv_obj_set_height(ui_date_group2, 82);
    lv_obj_set_x(ui_date_group2, -1);
    lv_obj_set_y(ui_date_group2, 172);
    lv_obj_set_align(ui_date_group2, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(ui_date_group2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_date_group2, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_date_group2, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_date_group2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_date_group2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_day2 = lv_label_create(ui_date_group2);
    lv_obj_set_width(ui_day2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_day2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_day2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_day2, "MON");
    lv_obj_set_style_text_color(ui_day2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_day2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_day2, &ui_font_Subtitle, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_month2 = lv_label_create(ui_date_group2);
    lv_obj_set_width(ui_month2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_month2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_month2, -123);
    lv_obj_set_y(ui_month2, 1);
    lv_obj_set_align(ui_month2, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_month2, "18 FEB");
    lv_obj_set_style_text_color(ui_month2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_month2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_month2, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_year2 = lv_label_create(ui_date_group2);
    lv_obj_set_width(ui_year2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_year2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_year2, -108);
    lv_obj_set_y(ui_year2, 2);
    lv_obj_set_align(ui_year2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_year2, "2022");
    lv_obj_set_style_text_color(ui_year2, lv_color_hex(0x6B6B6B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_year2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_year2, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_clock_group = lv_obj_create(ui_watch_analog);
    lv_obj_set_width(ui_clock_group, 350);
    lv_obj_set_height(ui_clock_group, 350);
    lv_obj_set_align(ui_clock_group, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_clock_group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_clock_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_clock_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_sec = lv_img_create(ui_clock_group);
    lv_img_set_src(ui_sec, &ui_img_clockwise_sec_png);
    lv_obj_set_width(ui_sec, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_sec, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_sec, 0);
    lv_obj_set_y(ui_sec, -67);
    lv_obj_set_align(ui_sec, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_sec, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_sec, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_pivot(ui_sec, 15, 155);
    lv_img_set_angle(ui_sec, 12000);
    lv_img_set_zoom(ui_sec, 190);

    ui_min = lv_img_create(ui_clock_group);
    lv_img_set_src(ui_min, &ui_img_clockwise_min_png);
    lv_obj_set_width(ui_min, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_min, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_min, 0);
    lv_obj_set_y(ui_min, -75);
    lv_obj_set_align(ui_min, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_min, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_min, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_pivot(ui_min, 9, 153);
    lv_img_set_zoom(ui_min, 190);

    ui_hour = lv_img_create(ui_clock_group);
    lv_img_set_src(ui_hour, &ui_img_clockwise_hour_png);
    lv_obj_set_width(ui_hour, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_hour, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_hour, 0);
    lv_obj_set_y(ui_hour, -45);
    lv_obj_set_align(ui_hour, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_hour, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_hour, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_pivot(ui_hour, 9, 93);
    lv_img_set_zoom(ui_hour, 190);

    ui_dots_group = lv_obj_create(ui_watch_analog);
    lv_obj_set_width(ui_dots_group, 20);
    lv_obj_set_height(ui_dots_group, 50);
    lv_obj_set_x(ui_dots_group, -10);
    lv_obj_set_y(ui_dots_group, 0);
    lv_obj_set_align(ui_dots_group, LV_ALIGN_RIGHT_MID);
    lv_obj_set_flex_flow(ui_dots_group, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_dots_group, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dots_group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_dots_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dots_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_dots_group, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_dots_group, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot16 = lv_obj_create(ui_dots_group);
    lv_obj_set_width(ui_dot16, 10);
    lv_obj_set_height(ui_dot16, 10);
    lv_obj_set_align(ui_dot16, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot16, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot16, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot17 = lv_obj_create(ui_dots_group);
    lv_obj_set_width(ui_dot17, 6);
    lv_obj_set_height(ui_dot17, 6);
    lv_obj_set_align(ui_dot17, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot17, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot17, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot17, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot17, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_watch_analog, ui_event_watch_analog, LV_EVENT_ALL, NULL);
}

void ui_blood_oxy_screen_init(void)
{
    ui_blood_oxy = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_blood_oxy, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_bg6 = lv_img_create(ui_blood_oxy);
    lv_img_set_src(ui_bg6, &ui_img_bg3_png);
    lv_obj_set_width(ui_bg6, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bg6, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bg6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg6, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_bg6, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_zoom(ui_bg6, 190);

    ui_title_group_1 = ui_titlegroup_create(ui_blood_oxy);
    lv_obj_set_x(ui_title_group_1, 0);
    lv_obj_set_y(ui_title_group_1, -80);
    lv_obj_set_align(ui_title_group_1, LV_ALIGN_CENTER);

    lv_obj_set_x(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_TITLE), 0);
    lv_obj_set_y(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_TITLE), -10);
    lv_obj_set_align(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_TITLE), LV_ALIGN_CENTER);
    lv_label_set_text(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_TITLE), "SpO2");
    lv_obj_set_style_text_font(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_TITLE), &ui_font_Subtitle,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_label_set_text(ui_comp_get_child(ui_title_group_1, UI_COMP_TITLEGROUP_SUBTITLE), "Blood Oxygen");

    ui_button_round = ui_buttonround_create(ui_blood_oxy);
    lv_obj_set_width(ui_button_round, 40);
    lv_obj_set_height(ui_button_round, 40);
    lv_obj_set_x(ui_button_round, 0);
    lv_obj_set_y(ui_button_round, -40);
    lv_obj_set_style_radius(ui_button_round, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_button_round, lv_color_hex(0xEE1C18), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_button_round, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_button_round, &ui_img_measure_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_button_round, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blood_presure_group = lv_obj_create(ui_blood_oxy);
    lv_obj_set_height(ui_blood_presure_group, 50);
    lv_obj_set_width(ui_blood_presure_group, LV_SIZE_CONTENT); /// 180
    lv_obj_set_x(ui_blood_presure_group, 0);
    lv_obj_set_y(ui_blood_presure_group, -20);
    lv_obj_set_align(ui_blood_presure_group, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_blood_presure_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_blood_presure_group, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_blood_presure_group, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_blood_presure_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blood_presure_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blood_oxygen = lv_label_create(ui_blood_presure_group);
    lv_obj_set_height(ui_blood_oxygen, lv_pct(80));
    lv_obj_set_width(ui_blood_oxygen, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_blood_oxygen, LV_ALIGN_CENTER);
    lv_label_set_text(ui_blood_oxygen, "91");
    lv_obj_set_style_text_color(ui_blood_oxygen, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_blood_oxygen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_blood_oxygen, &ui_font_Number_big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_percent = lv_label_create(ui_blood_presure_group);
    lv_obj_set_width(ui_percent, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_percent, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_percent, LV_ALIGN_CENTER);
    lv_label_set_text(ui_percent, "%");
    lv_obj_set_style_text_color(ui_percent, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_percent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_percent, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pulse_group = ui_pulsegroup_create(ui_blood_oxy);
    lv_obj_set_x(ui_pulse_group, 2);
    lv_obj_set_y(ui_pulse_group, 23);
    lv_obj_set_style_border_color(ui_pulse_group, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pulse_group, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pulse_group, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pulse_group, LV_BORDER_SIDE_TOP, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_img_set_zoom(ui_comp_get_child(ui_pulse_group, UI_COMP_PULSEGROUP_HEART), 153);

    lv_obj_set_style_text_font(ui_comp_get_child(ui_pulse_group, UI_COMP_PULSEGROUP_BPM), &ui_font_Title,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_arc_spo2 = lv_arc_create(ui_blood_oxy);
    lv_obj_set_width(ui_arc_spo2, 230);
    lv_obj_set_height(ui_arc_spo2, 230);
    lv_obj_set_align(ui_arc_spo2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_arc_spo2, LV_OBJ_FLAG_CLICKABLE); /// Flags
    lv_arc_set_value(ui_arc_spo2, 91);
    lv_arc_set_bg_angles(ui_arc_spo2, 145, 335);
    lv_obj_set_style_arc_color(ui_arc_spo2, lv_color_hex(0x414141), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_spo2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_spo2, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_arc_spo2, lv_color_hex(0x41A1E6), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_arc_spo2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_arc_spo2, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_arc_spo2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_arc_spo2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_precent_70 = lv_label_create(ui_blood_oxy);
    lv_obj_set_width(ui_precent_70, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_precent_70, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_precent_70, 30);
    lv_obj_set_y(ui_precent_70, -30);
    lv_obj_set_align(ui_precent_70, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(ui_precent_70, "70%");
    lv_obj_set_style_text_color(ui_precent_70, lv_color_hex(0x6A6D6A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_precent_70, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_precent_70, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_precent_100 = lv_label_create(ui_blood_oxy);
    lv_obj_set_width(ui_precent_100, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_precent_100, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_precent_100, 0);
    lv_obj_set_y(ui_precent_100, -35);
    lv_obj_set_align(ui_precent_100, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_precent_100, "100%");
    lv_obj_set_style_text_color(ui_precent_100, lv_color_hex(0x6A6D6A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_precent_100, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_precent_100, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_health_dots_group = lv_obj_create(ui_blood_oxy);
    lv_obj_set_width(ui_health_dots_group, 102);
    lv_obj_set_height(ui_health_dots_group, 18);
    lv_obj_set_x(ui_health_dots_group, 0);
    lv_obj_set_y(ui_health_dots_group, -15);
    lv_obj_set_align(ui_health_dots_group, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_health_dots_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_health_dots_group, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_health_dots_group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_health_dots_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_health_dots_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_health_dots_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_health_dots_group, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot7 = lv_obj_create(ui_health_dots_group);
    lv_obj_set_width(ui_dot7, 10);
    lv_obj_set_height(ui_dot7, 10);
    lv_obj_set_align(ui_dot7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot7, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot7, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot6 = lv_obj_create(ui_health_dots_group);
    lv_obj_set_width(ui_dot6, 6);
    lv_obj_set_height(ui_dot6, 6);
    lv_obj_set_align(ui_dot6, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot6, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot6, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot6, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot5 = lv_obj_create(ui_health_dots_group);
    lv_obj_set_width(ui_dot5, 6);
    lv_obj_set_height(ui_dot5, 6);
    lv_obj_set_align(ui_dot5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot5, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot5, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot5, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dots_group1 = lv_obj_create(ui_blood_oxy);
    lv_obj_set_width(ui_dots_group1, 20);
    lv_obj_set_height(ui_dots_group1, 50);
    lv_obj_set_x(ui_dots_group1, -10);
    lv_obj_set_y(ui_dots_group1, 0);
    lv_obj_set_align(ui_dots_group1, LV_ALIGN_RIGHT_MID);
    lv_obj_set_flex_flow(ui_dots_group1, LV_FLEX_FLOW_COLUMN_REVERSE);
    lv_obj_set_flex_align(ui_dots_group1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dots_group1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_dots_group1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dots_group1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_dots_group1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_dots_group1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot18 = lv_obj_create(ui_dots_group1);
    lv_obj_set_width(ui_dot18, 10);
    lv_obj_set_height(ui_dot18, 10);
    lv_obj_set_align(ui_dot18, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot18, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot18, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot19 = lv_obj_create(ui_dots_group1);
    lv_obj_set_width(ui_dot19, 6);
    lv_obj_set_height(ui_dot19, 6);
    lv_obj_set_align(ui_dot19, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot19, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot19, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot19, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot19, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_button_round, ui_event_button_round_buttonround, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_blood_oxy, ui_event_blood_oxy, LV_EVENT_ALL, NULL);
}
void ui_ecg_screen_init(void)
{
    ui_ecg = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ecg, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_Image1 = lv_img_create(ui_ecg);
    // lv_img_set_src(ui_Image1, &ui_img_s8_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);  /// 397
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT); /// 397
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_bg1 = lv_img_create(ui_ecg);
    lv_img_set_src(ui_bg1, &ui_img_bg3_png);
    lv_obj_set_width(ui_bg1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bg1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bg1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg1, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_bg1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_title_group_2 = ui_titlegroup_create(ui_ecg);
    lv_obj_set_x(ui_title_group_2, 0);
    lv_obj_set_y(ui_title_group_2, -186);
    lv_obj_set_align(ui_title_group_2, LV_ALIGN_BOTTOM_MID);

    lv_obj_set_x(ui_comp_get_child(ui_title_group_2, UI_COMP_TITLEGROUP_TITLE), 0);
    lv_obj_set_y(ui_comp_get_child(ui_title_group_2, UI_COMP_TITLEGROUP_TITLE), 0);
    lv_obj_set_align(ui_comp_get_child(ui_title_group_2, UI_COMP_TITLEGROUP_TITLE), LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_comp_get_child(ui_title_group_2, UI_COMP_TITLEGROUP_TITLE), "ECG");
    lv_obj_set_style_text_font(ui_comp_get_child(ui_title_group_2, UI_COMP_TITLEGROUP_TITLE), &ui_font_Subtitle,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_label_set_text(ui_comp_get_child(ui_title_group_2, UI_COMP_TITLEGROUP_SUBTITLE), "7 hours ago");

    ui_button_down6 = ui_buttondown_create(ui_ecg);
    lv_obj_set_x(ui_button_down6, 94);
    lv_obj_set_y(ui_button_down6, 84);

    lv_img_set_src(ui_comp_get_child(ui_button_down6, UI_COMP_BUTTONDOWN_BUTTON_DOWN_ICON), &ui_img_house_png);

    ui_button_round1 = ui_buttonround_create(ui_ecg);
    lv_obj_set_width(ui_button_round1, 45);
    lv_obj_set_height(ui_button_round1, 45);
    lv_obj_set_x(ui_button_round1, 3);
    lv_obj_set_y(ui_button_round1, -35);

    ui_pulse_group1 = ui_pulsegroup_create(ui_ecg);
    lv_obj_set_x(ui_pulse_group1, 8);
    lv_obj_set_y(ui_pulse_group1, 13);

    ui_health_dots_group1 = lv_obj_create(ui_ecg);
    lv_obj_set_width(ui_health_dots_group1, 102);
    lv_obj_set_height(ui_health_dots_group1, 18);
    lv_obj_set_x(ui_health_dots_group1, 2);
    lv_obj_set_y(ui_health_dots_group1, -6);
    lv_obj_set_align(ui_health_dots_group1, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_health_dots_group1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_health_dots_group1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_health_dots_group1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_health_dots_group1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_health_dots_group1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_health_dots_group1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_health_dots_group1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot9 = lv_obj_create(ui_health_dots_group1);
    lv_obj_set_width(ui_dot9, 6);
    lv_obj_set_height(ui_dot9, 6);
    lv_obj_set_align(ui_dot9, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot9, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot9, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot9, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot8 = lv_obj_create(ui_health_dots_group1);
    lv_obj_set_width(ui_dot8, 10);
    lv_obj_set_height(ui_dot8, 10);
    lv_obj_set_align(ui_dot8, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot8, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot8, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot10 = lv_obj_create(ui_health_dots_group1);
    lv_obj_set_width(ui_dot10, 6);
    lv_obj_set_height(ui_dot10, 6);
    lv_obj_set_align(ui_dot10, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot10, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot10, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot10, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_chart_group = lv_obj_create(ui_ecg);
    lv_obj_set_height(ui_chart_group, 50);
    lv_obj_set_width(ui_chart_group, lv_pct(83));
    lv_obj_set_x(ui_chart_group, 3);
    lv_obj_set_y(ui_chart_group, -37);
    lv_obj_set_align(ui_chart_group, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(ui_chart_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chart_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_chart_group, lv_color_hex(0x494949), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chart_group, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_chart_ecg = lv_chart_create(ui_chart_group);
    lv_obj_set_width(ui_chart_ecg, 209);
    lv_obj_set_height(ui_chart_ecg, 52);
    lv_obj_set_x(ui_chart_ecg, -7);
    lv_obj_set_y(ui_chart_ecg, -3);
    lv_obj_set_align(ui_chart_ecg, LV_ALIGN_LEFT_MID);
    lv_chart_set_type(ui_chart_ecg, LV_CHART_TYPE_LINE);
    lv_chart_set_point_count(ui_chart_ecg, 147);
    lv_chart_set_div_line_count(ui_chart_ecg, 10, 40);
    lv_chart_set_axis_tick(ui_chart_ecg, LV_CHART_AXIS_PRIMARY_X, 1, 10, 0, 10, false, 50);
    lv_chart_set_axis_tick(ui_chart_ecg, LV_CHART_AXIS_PRIMARY_Y, 1, 5, 0, 2, false, 50);
    lv_chart_series_t *ui_chart_ecg_series_1 = lv_chart_add_series(ui_chart_ecg, lv_color_hex(0xEE1C18),
                                                                   LV_CHART_AXIS_PRIMARY_Y);
    static lv_coord_t ui_chart_ecg_series_1_array[] = {20, 20, 21, 24, 25, 24, 22, 25, 18, 90, 10, 24, 25, 28, 38, 39, 28, 24, 23, 25, 27, 27, 25, 22, 20, 20, 20, 21, 24, 25, 24, 22, 25, 18, 90, 10, 24, 25, 28, 38, 39, 28, 24, 23, 25, 27, 27, 25, 22, 20, 20, 20, 21, 24, 25, 24, 22, 25, 18, 90, 10, 24, 25, 28, 38, 39, 28, 24, 23, 25, 27, 27, 25, 22, 20, 20, 21, 24, 25, 24, 22, 25, 18, 90, 10, 24, 25, 28, 38, 39, 28, 24, 23, 25, 27, 27, 25, 22, 20, 20, 21, 24, 25, 24, 22, 25, 18, 90, 10, 24, 25, 28, 38, 39, 28, 24, 23, 25, 27, 27, 25, 22, 20, 20, 21, 24, 25, 24, 22, 25, 18, 90, 10, 24, 25, 28, 38, 39, 28, 24, 23, 25, 27, 27, 25, 22, 20};
    lv_chart_set_ext_y_array(ui_chart_ecg, ui_chart_ecg_series_1, ui_chart_ecg_series_1_array);
    lv_obj_set_style_bg_color(ui_chart_ecg, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_chart_ecg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_line_color(ui_chart_ecg, lv_color_hex(0x2C2C2C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_line_opa(ui_chart_ecg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_line_width(ui_chart_ecg, 3, LV_PART_ITEMS | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_button_round1, ui_event_button_round1_buttonround, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ecg, ui_event_ecg, LV_EVENT_ALL, NULL);
}
void ui_blood_pressure_screen_init(void)
{
    ui_blood_pressure = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_blood_pressure, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_bg2 = lv_img_create(ui_blood_pressure);
    lv_img_set_src(ui_bg2, &ui_img_bg3_png);
    lv_obj_set_width(ui_bg2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bg2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bg2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg2, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_bg2, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_img_set_zoom(ui_bg2, 240);

    ui_Image3 = lv_img_create(ui_blood_pressure);
    // lv_img_set_src(ui_Image3, &ui_img_s9_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST); /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);                     /// Flags

    ui_title_group_3 = ui_titlegroup_create(ui_blood_pressure);
    lv_obj_set_x(ui_title_group_3, 2);
    lv_obj_set_y(ui_title_group_3, -184);
    lv_obj_set_align(ui_title_group_3, LV_ALIGN_BOTTOM_MID);

    lv_obj_set_x(ui_comp_get_child(ui_title_group_3, UI_COMP_TITLEGROUP_TITLE), 0);
    lv_obj_set_y(ui_comp_get_child(ui_title_group_3, UI_COMP_TITLEGROUP_TITLE), 0);
    lv_obj_set_align(ui_comp_get_child(ui_title_group_3, UI_COMP_TITLEGROUP_TITLE), LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_comp_get_child(ui_title_group_3, UI_COMP_TITLEGROUP_TITLE), "Blood Pressure");
    lv_obj_set_style_text_font(ui_comp_get_child(ui_title_group_3, UI_COMP_TITLEGROUP_TITLE), &ui_font_Subtitle,
                               LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_label_set_text(ui_comp_get_child(ui_title_group_3, UI_COMP_TITLEGROUP_SUBTITLE), "7 hours ago");
    lv_obj_add_flag(ui_comp_get_child(ui_title_group_3, UI_COMP_TITLEGROUP_SUBTITLE), LV_OBJ_FLAG_HIDDEN); /// Flags

    ui_button_down7 = ui_buttondown_create(ui_blood_pressure);
    lv_obj_set_x(ui_button_down7, 90);
    lv_obj_set_y(ui_button_down7, 85);

    lv_img_set_src(ui_comp_get_child(ui_button_down7, UI_COMP_BUTTONDOWN_BUTTON_DOWN_ICON), &ui_img_house_png);

    ui_button_round2 = ui_buttonround_create(ui_blood_pressure);
    lv_obj_set_width(ui_button_round2, 45);
    lv_obj_set_height(ui_button_round2, 45);
    lv_obj_set_x(ui_button_round2, 0);
    lv_obj_set_y(ui_button_round2, -35);

    ui_blood_presure_group1 = lv_obj_create(ui_blood_pressure);
    lv_obj_set_width(ui_blood_presure_group1, 89);
    lv_obj_set_height(ui_blood_presure_group1, 44);
    lv_obj_set_x(ui_blood_presure_group1, -56);
    lv_obj_set_y(ui_blood_presure_group1, 4);
    lv_obj_set_align(ui_blood_presure_group1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_blood_presure_group1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_blood_presure_group1, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_blood_presure_group1, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_blood_presure_group1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blood_presure_group1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_blood_presure_group1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_blood_presure_group1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blood_oxygen1 = lv_label_create(ui_blood_presure_group1);
    lv_obj_set_width(ui_blood_oxygen1, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_blood_oxygen1, LV_SIZE_CONTENT); /// 80
    lv_obj_set_x(ui_blood_oxygen1, -2);
    lv_obj_set_y(ui_blood_oxygen1, 50);
    lv_obj_set_align(ui_blood_oxygen1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_blood_oxygen1, "136");
    lv_obj_set_style_text_color(ui_blood_oxygen1, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_blood_oxygen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_blood_oxygen1, &ui_font_Number_big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_pulse_group2 = ui_pulsegroup_create(ui_blood_pressure);
    lv_obj_set_x(ui_pulse_group2, 5);
    lv_obj_set_y(ui_pulse_group2, 19);
    lv_obj_set_align(ui_pulse_group2, LV_ALIGN_TOP_MID);

    ui_blood_presure_group2 = lv_obj_create(ui_blood_pressure);
    lv_obj_set_width(ui_blood_presure_group2, 84);
    lv_obj_set_height(ui_blood_presure_group2, 97);
    lv_obj_set_x(ui_blood_presure_group2, 74);
    lv_obj_set_y(ui_blood_presure_group2, -21);
    lv_obj_set_align(ui_blood_presure_group2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_blood_presure_group2, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_blood_presure_group2, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_blood_presure_group2, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_blood_presure_group2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blood_presure_group2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_blood_presure_group2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_blood_presure_group2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dia_group = lv_obj_create(ui_blood_presure_group2);
    lv_obj_set_width(ui_dia_group, 146);
    lv_obj_set_height(ui_dia_group, 43);
    lv_obj_set_x(ui_dia_group, 12);
    lv_obj_set_y(ui_dia_group, -41);
    lv_obj_set_align(ui_dia_group, LV_ALIGN_RIGHT_MID);
    lv_obj_set_flex_flow(ui_dia_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_dia_group, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dia_group, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_dia_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dia_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_dia_group, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_dia_group, 5, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dia = lv_label_create(ui_dia_group);
    lv_obj_set_width(ui_dia, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_dia, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_dia, LV_ALIGN_CENTER);
    lv_label_set_text(ui_dia, "DIA");
    lv_obj_set_style_text_color(ui_dia, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_dia, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_dia, &ui_font_H1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_mmhg2 = lv_label_create(ui_dia_group);
    lv_obj_set_height(ui_mmhg2, 29);
    lv_obj_set_width(ui_mmhg2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_mmhg2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_mmhg2, "mmhg");
    lv_obj_set_style_text_color(ui_mmhg2, lv_color_hex(0x7B7D7B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_mmhg2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_mmhg2, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blood_oxygen2 = lv_label_create(ui_blood_presure_group2);
    lv_obj_set_width(ui_blood_oxygen2, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_blood_oxygen2, LV_SIZE_CONTENT); /// 80
    lv_obj_set_align(ui_blood_oxygen2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_blood_oxygen2, "85");
    lv_obj_set_style_text_color(ui_blood_oxygen2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_blood_oxygen2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_blood_oxygen2, &ui_font_Number_big, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_health_dots_group2 = lv_obj_create(ui_blood_pressure);
    lv_obj_set_width(ui_health_dots_group2, 102);
    lv_obj_set_height(ui_health_dots_group2, 18);
    lv_obj_set_x(ui_health_dots_group2, 0);
    lv_obj_set_y(ui_health_dots_group2, -15);
    lv_obj_set_align(ui_health_dots_group2, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(ui_health_dots_group2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_health_dots_group2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_health_dots_group2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_health_dots_group2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_health_dots_group2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_health_dots_group2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_health_dots_group2, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot12 = lv_obj_create(ui_health_dots_group2);
    lv_obj_set_width(ui_dot12, 6);
    lv_obj_set_height(ui_dot12, 6);
    lv_obj_set_align(ui_dot12, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot12, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot12, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot12, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot13 = lv_obj_create(ui_health_dots_group2);
    lv_obj_set_width(ui_dot13, 6);
    lv_obj_set_height(ui_dot13, 6);
    lv_obj_set_align(ui_dot13, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot13, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot13, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_dot13, lv_color_hex(0x676767), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_dot13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_dot11 = lv_obj_create(ui_health_dots_group2);
    lv_obj_set_width(ui_dot11, 10);
    lv_obj_set_height(ui_dot11, 10);
    lv_obj_set_align(ui_dot11, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_dot11, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_dot11, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_button_round2, ui_event_button_round2_buttonround, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_blood_pressure, ui_event_blood_pressure, LV_EVENT_ALL, NULL);
}
void ui_measuing_screen_init(void)
{
    ui_measuing = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_measuing, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_bg7 = lv_img_create(ui_measuing);
    lv_img_set_src(ui_bg7, &ui_img_bg3_png);
    lv_obj_set_width(ui_bg7, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_bg7, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_bg7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bg7, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_bg7, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_pulse_group3 = ui_pulsegroup_create(ui_measuing);
    lv_obj_set_x(ui_pulse_group3, 3);
    lv_obj_set_y(ui_pulse_group3, 44);
    lv_obj_set_style_border_color(ui_pulse_group3, lv_color_hex(0x545454), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_pulse_group3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_pulse_group3, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_pulse_group3, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_measuring = lv_label_create(ui_measuing);
    lv_obj_set_width(ui_measuring, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_measuring, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_measuring, 0);
    lv_obj_set_y(ui_measuring, 80);
    lv_obj_set_align(ui_measuring, LV_ALIGN_CENTER);
    lv_label_set_text(ui_measuring, "Measuring...");
    lv_obj_set_style_text_color(ui_measuring, lv_color_hex(0x6A6D6A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_measuring, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_measuring, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Spinner2 = lv_spinner_create(ui_measuing, 1000, 90);
    lv_obj_set_width(ui_Spinner2, 140);
    lv_obj_set_height(ui_Spinner2, 140);
    lv_obj_set_x(ui_Spinner2, 0);
    lv_obj_set_y(ui_Spinner2, -40);
    lv_obj_set_align(ui_Spinner2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner2, LV_OBJ_FLAG_CLICKABLE); /// Flags
    lv_obj_set_style_arc_color(ui_Spinner2, lv_color_hex(0x3E413E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Spinner2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Spinner2, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Spinner2, lv_color_hex(0xEE1C18), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Spinner2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(ui_Spinner2, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_blood_group = lv_obj_create(ui_measuing);
    lv_obj_set_width(ui_blood_group, 120);
    lv_obj_set_height(ui_blood_group, 120);
    lv_obj_set_x(ui_blood_group, 0);
    lv_obj_set_y(ui_blood_group, -40);
    lv_obj_set_align(ui_blood_group, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_blood_group, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_radius(ui_blood_group, 160, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_blood_group, lv_color_hex(0x390800), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blood_group, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui_blood_group, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(ui_blood_group, lv_color_hex(0x4E2725), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_opa(ui_blood_group, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_width(ui_blood_group, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_pad(ui_blood_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blood1 = lv_img_create(ui_blood_group);
    lv_img_set_src(ui_blood1, &ui_img_wave2_png);
    lv_obj_set_width(ui_blood1, 119);
    lv_obj_set_height(ui_blood1, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_blood1, -15);
    lv_obj_set_y(ui_blood1, 1);
    lv_obj_set_align(ui_blood1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_blood1, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_blood1, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_blood_fill = lv_obj_create(ui_blood_group);
    lv_obj_set_height(ui_blood_fill, 71);
    lv_obj_set_width(ui_blood_fill, lv_pct(100));
    lv_obj_set_x(ui_blood_fill, 1);
    lv_obj_set_y(ui_blood_fill, 2);
    lv_obj_set_align(ui_blood_fill, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_blood_fill, LV_OBJ_FLAG_SCROLLABLE); /// Flags
    lv_obj_set_style_bg_color(ui_blood_fill, lv_color_hex(0xDE615A), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_blood_fill, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_blood_fill, lv_color_hex(0xDE1810), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_blood_fill, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_blood2 = lv_img_create(ui_blood_group);
    lv_img_set_src(ui_blood2, &ui_img_wave1_png);
    lv_obj_set_width(ui_blood2, 148);
    lv_obj_set_height(ui_blood2, LV_SIZE_CONTENT); /// 1
    lv_obj_set_x(ui_blood2, 0);
    lv_obj_set_y(ui_blood2, 3);
    lv_obj_set_align(ui_blood2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_blood2, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_blood2, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    ui_x_button = lv_btn_create(ui_measuing);
    lv_obj_set_width(ui_x_button, 50);
    lv_obj_set_height(ui_x_button, 32);
    lv_obj_set_x(ui_x_button, -2);
    lv_obj_set_y(ui_x_button, -1);
    lv_obj_set_align(ui_x_button, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_x_button, LV_OBJ_FLAG_SCROLL_ON_FOCUS); /// Flags
    lv_obj_clear_flag(ui_x_button, LV_OBJ_FLAG_SCROLLABLE);    /// Flags
    lv_obj_set_style_radius(ui_x_button, 50, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_x_button, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_x_button, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_x = lv_img_create(ui_x_button);
    lv_img_set_src(ui_x, &ui_img_x_png);
    lv_obj_set_width(ui_x, LV_SIZE_CONTENT);  /// 1
    lv_obj_set_height(ui_x, LV_SIZE_CONTENT); /// 1
    lv_obj_set_align(ui_x, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_x, LV_OBJ_FLAG_ADV_HITTEST);  /// Flags
    lv_obj_clear_flag(ui_x, LV_OBJ_FLAG_SCROLLABLE); /// Flags

    lv_obj_add_event_cb(ui_x_button, ui_event_x_button, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_measuing, ui_event_measuing, LV_EVENT_ALL, NULL);
}

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_basic_init(dispp);
    lv_disp_set_theme(dispp, theme);
    ui_watch_analog_screen_init();
    ui_ecg_screen_init();
    ui_blood_pressure_screen_init();
    ui_measuing_screen_init();
    lv_disp_load_scr(ui_watch_analog);
    // lv_disp_load_scr(ui_watch_analog);
    // lv_disp_load_scr(ui_ecg);
}

void watchface_set_time(int32_t hour, int32_t minute, int32_t second)
{
    char buff[20];
    memset(buff, 0, sizeof(buff));
    if (hour < 10 && minute < 10)
        snprintf(buff, sizeof(buff), "0%d   0%d", hour, minute);
    else if (hour < 10 && minute >= 10)
        snprintf(buff, sizeof(buff), "0%d   %d", hour, minute);
    else if (hour >= 10 && minute < 10)
        snprintf(buff, sizeof(buff), "%d   0%d", hour, minute);
    else
        snprintf(buff, sizeof(buff), "%d   %d", hour, minute);

    lv_label_set_text(ui_clock, buff);
    // sec_Animation(&ui_sec, 0);
}