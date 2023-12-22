// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: Smartwatch_240_240

#ifndef _SMARTWATCH_240_240_UI_H
#define _SMARTWATCH_240_240_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

void sec_Animation(lv_obj_t * TargetObject, int delay);
void min_Animation(lv_obj_t * TargetObject, int delay);
void hour_Animation(lv_obj_t * TargetObject, int delay);
void left_Animation(lv_obj_t * TargetObject, int delay);
void right_Animation(lv_obj_t * TargetObject, int delay);
void opa_on_Animation(lv_obj_t * TargetObject, int delay);
void dots_Animation(lv_obj_t * TargetObject, int delay);
void top_Animation(lv_obj_t * TargetObject, int delay);
void cloud_Animation(lv_obj_t * TargetObject, int delay);
void blood2_Animation(lv_obj_t * TargetObject, int delay);
void blood1_Animation(lv_obj_t * TargetObject, int delay);
void heart_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_watch_analog(lv_event_t * e);
extern lv_obj_t * ui_watch_analog;
extern lv_obj_t * ui_bg_2;
extern lv_obj_t * ui_clock;
extern lv_obj_t * ui_dots;
extern lv_obj_t * ui_battery_group1;
extern lv_obj_t * ui_date_group2;
extern lv_obj_t * ui_day2;
extern lv_obj_t * ui_month2;
extern lv_obj_t * ui_year2;
extern lv_obj_t * ui_clock_group;
extern lv_obj_t * ui_sec;
extern lv_obj_t * ui_min;
extern lv_obj_t * ui_hour;
extern lv_obj_t * ui_dots_group;
extern lv_obj_t * ui_dot16;
extern lv_obj_t * ui_dot17;
void ui_event_blood_oxy(lv_event_t * e);
extern lv_obj_t * ui_blood_oxy;
extern lv_obj_t * ui_bg6;
extern lv_obj_t * ui_title_group_1;
void ui_event_button_round_buttonround(lv_event_t * e);
extern lv_obj_t * ui_button_round;
extern lv_obj_t * ui_blood_presure_group;
extern lv_obj_t * ui_blood_oxygen;
extern lv_obj_t * ui_percent;
extern lv_obj_t * ui_pulse_group;
extern lv_obj_t * ui_arc_spo2;
extern lv_obj_t * ui_precent_70;
extern lv_obj_t * ui_precent_100;
extern lv_obj_t * ui_health_dots_group;
extern lv_obj_t * ui_dot7;
extern lv_obj_t * ui_dot6;
extern lv_obj_t * ui_dot5;
extern lv_obj_t * ui_dots_group1;
extern lv_obj_t * ui_dot18;
extern lv_obj_t * ui_dot19;
void ui_event_ecg(lv_event_t * e);
extern lv_obj_t * ui_ecg;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_bg1;
extern lv_obj_t * ui_title_group_2;
extern lv_obj_t * ui_button_down6;
void ui_event_button_round1_buttonround(lv_event_t * e);
extern lv_obj_t * ui_button_round1;
extern lv_obj_t * ui_pulse_group1;
extern lv_obj_t * ui_health_dots_group1;
extern lv_obj_t * ui_dot9;
extern lv_obj_t * ui_dot8;
extern lv_obj_t * ui_dot10;
extern lv_obj_t * ui_chart_group;
extern lv_obj_t * ui_chart_ecg;
void ui_event_blood_pressure(lv_event_t * e);
extern lv_obj_t * ui_blood_pressure;
extern lv_obj_t * ui_bg2;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_title_group_3;
extern lv_obj_t * ui_button_down7;
void ui_event_button_round2_buttonround(lv_event_t * e);
extern lv_obj_t * ui_button_round2;
extern lv_obj_t * ui_blood_presure_group1;
extern lv_obj_t * ui_blood_oxygen1;
extern lv_obj_t * ui_pulse_group2;
extern lv_obj_t * ui_blood_presure_group2;
extern lv_obj_t * ui_dia_group;
extern lv_obj_t * ui_dia;
extern lv_obj_t * ui_mmhg2;
extern lv_obj_t * ui_blood_oxygen2;
extern lv_obj_t * ui_health_dots_group2;
extern lv_obj_t * ui_dot12;
extern lv_obj_t * ui_dot13;
extern lv_obj_t * ui_dot11;
void ui_event_measuing(lv_event_t * e);
extern lv_obj_t * ui_measuing;
extern lv_obj_t * ui_bg7;
extern lv_obj_t * ui_pulse_group3;
extern lv_obj_t * ui_measuring;
extern lv_obj_t * ui_Spinner2;
extern lv_obj_t * ui_blood_group;
extern lv_obj_t * ui_blood1;
extern lv_obj_t * ui_blood_fill;
extern lv_obj_t * ui_blood2;
void ui_event_x_button(lv_event_t * e);
extern lv_obj_t * ui_x_button;
extern lv_obj_t * ui_x;

LV_IMG_DECLARE(ui_img_bg1_png);    // assets\bg1.png
LV_IMG_DECLARE(ui_img_bg3_png);    // assets\bg3.png

LV_IMG_DECLARE(ui_img_flash_png);    // assets\flash.png
LV_IMG_DECLARE(ui_img_clockwise_sec_png);    // assets\clockwise_sec.png
LV_IMG_DECLARE(ui_img_clockwise_min_png);    // assets\clockwise_min.png
LV_IMG_DECLARE(ui_img_clockwise_hour_png);    // assets\clockwise_hour.png


LV_IMG_DECLARE(ui_img_measure_png);    // assets\measure.png
LV_IMG_DECLARE(ui_img_heart_png);    // assets\heart.png
// LV_IMG_DECLARE(ui_img_s8_png);    // assets\s8.png
// LV_IMG_DECLARE(ui_img_weather_png);    // assets\weather.png
// LV_IMG_DECLARE(ui_img_btn_bg_3_png);    // assets\btn_bg_3.png
LV_IMG_DECLARE(ui_img_house_png);    // assets\house.png
LV_IMG_DECLARE(ui_img_s9_png);    // assets\s9.png
LV_IMG_DECLARE(ui_img_wave2_png);    // assets\wave2.png
LV_IMG_DECLARE(ui_img_wave1_png);    // assets\wave1.png
LV_IMG_DECLARE(ui_img_x_png);    // assets\x.png


LV_FONT_DECLARE(ui_font_H1);
LV_FONT_DECLARE(ui_font_Number_big);
LV_FONT_DECLARE(ui_font_Number_extra);
LV_FONT_DECLARE(ui_font_Subtitle);
LV_FONT_DECLARE(ui_font_Title);

void watchface_set_time(int32_t hour, int32_t minute, int32_t second);
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
