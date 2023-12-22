// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: Smartwatch_2

#ifndef _SMARTWATCH_2_UI_COMP_H
#define _SMARTWATCH_2_UI_COMP_H

#include "ui.h"

lv_obj_t * ui_comp_get_child(lv_obj_t * comp, uint32_t child_idx);
extern uint32_t LV_EVENT_GET_COMP_CHILD;

// COMPONENT battery_group
#define UI_COMP_BATTERY_GROUP_BATTERY_GROUP 0
#define UI_COMP_BATTERY_GROUP_FLASH 1
#define UI_COMP_BATTERY_GROUP_BATTERY_PERCENT 2
#define _UI_COMP_BATTERY_GROUP_NUM 3
lv_obj_t * ui_battery_group_create(lv_obj_t * comp_parent);

// COMPONENT buttondown
#define UI_COMP_BUTTONDOWN_BUTTONDOWN 0
#define UI_COMP_BUTTONDOWN_BUTTON_DOWN_ICON 1
#define UI_COMP_BUTTONDOWN_LINE 2
#define _UI_COMP_BUTTONDOWN_NUM 3
lv_obj_t * ui_buttondown_create(lv_obj_t * comp_parent);

// COMPONENT buttonround
#define UI_COMP_BUTTONROUND_BUTTONROUND 0
#define _UI_COMP_BUTTONROUND_NUM 1
lv_obj_t * ui_buttonround_create(lv_obj_t * comp_parent);

// COMPONENT buttontop
#define UI_COMP_BUTTONTOP_BUTTONTOP 0
#define UI_COMP_BUTTONTOP_BUTTON_TOP_ICON 1
#define UI_COMP_BUTTONTOP_LINE 2
#define _UI_COMP_BUTTONTOP_NUM 3
lv_obj_t * ui_buttontop_create(lv_obj_t * comp_parent);

// COMPONENT button_center
#define UI_COMP_BUTTON_CENTER_BUTTON_CENTER 0
#define UI_COMP_BUTTON_CENTER_BUTTON_CENTER_ICON 1
#define UI_COMP_BUTTON_CENTER_LINE2 2
#define _UI_COMP_BUTTON_CENTER_NUM 3
lv_obj_t * ui_button_center_create(lv_obj_t * comp_parent);

// COMPONENT daily_mission_group
#define UI_COMP_DAILY_MISSION_GROUP_DAILY_MISSION_GROUP 0
#define UI_COMP_DAILY_MISSION_GROUP_MISSION_PERCENT 1
#define UI_COMP_DAILY_MISSION_GROUP_DAILY_MISSION_IMAGE 2
#define UI_COMP_DAILY_MISSION_GROUP_DAILY_MISSION_ARC 3
#define _UI_COMP_DAILY_MISSION_GROUP_NUM 4
lv_obj_t * ui_daily_mission_group_create(lv_obj_t * comp_parent);
void ui_event_comp_daily_mission_group_daily_mission_arc(lv_event_t * e);

// COMPONENT date_group
#define UI_COMP_DATE_GROUP_DATE_GROUP 0
#define UI_COMP_DATE_GROUP_DAY 1
#define UI_COMP_DATE_GROUP_MONTH 2
#define UI_COMP_DATE_GROUP_YEAR 3
#define _UI_COMP_DATE_GROUP_NUM 4
lv_obj_t * ui_date_group_create(lv_obj_t * comp_parent);

// COMPONENT forecastgroup
#define UI_COMP_FORECASTGROUP_FORECASTGROUP 0
#define UI_COMP_FORECASTGROUP_DAY1 1
#define UI_COMP_FORECASTGROUP_DEGREE_GROUP 2
#define UI_COMP_FORECASTGROUP_DEGREE_GROUP_DAYTIME 3
#define UI_COMP_FORECASTGROUP_DEGREE_GROUP_NIGHTTIME 4
#define UI_COMP_FORECASTGROUP_CLOUD_SUN 5
#define _UI_COMP_FORECASTGROUP_NUM 6
lv_obj_t * ui_forecastgroup_create(lv_obj_t * comp_parent);

// COMPONENT pulsegroup
#define UI_COMP_PULSEGROUP_PULSEGROUP 0
#define UI_COMP_PULSEGROUP_HEART 1
#define UI_COMP_PULSEGROUP_PULSE_NUMBER 2
#define UI_COMP_PULSEGROUP_BPM 3
#define _UI_COMP_PULSEGROUP_NUM 4
lv_obj_t * ui_pulsegroup_create(lv_obj_t * comp_parent);

// COMPONENT step_group
#define UI_COMP_STEP_GROUP_STEP_GROUP 0
#define UI_COMP_STEP_GROUP_STEP 1
#define UI_COMP_STEP_GROUP_STEP_LABEL 2
#define _UI_COMP_STEP_GROUP_NUM 3
lv_obj_t * ui_step_group_create(lv_obj_t * comp_parent);

// COMPONENT titlegroup
#define UI_COMP_TITLEGROUP_TITLEGROUP 0
#define UI_COMP_TITLEGROUP_TITLE 1
#define UI_COMP_TITLEGROUP_SUBTITLE 2
#define _UI_COMP_TITLEGROUP_NUM 3
lv_obj_t * ui_titlegroup_create(lv_obj_t * comp_parent);

// COMPONENT todayweathergroup
#define UI_COMP_TODAYWEATHERGROUP_TODAYWEATHERGROUP 0
#define UI_COMP_TODAYWEATHERGROUP_DEGREE_6 1
#define UI_COMP_TODAYWEATHERGROUP_CLOUD_SUN 2
#define UI_COMP_TODAYWEATHERGROUP_DEGREE_8 3
#define _UI_COMP_TODAYWEATHERGROUP_NUM 4
lv_obj_t * ui_todayweathergroup_create(lv_obj_t * comp_parent);

// COMPONENT weathergroup1
#define UI_COMP_WEATHERGROUP1_WEATHERGROUP1 0
#define UI_COMP_WEATHERGROUP1_DEGREE_1 1
#define UI_COMP_WEATHERGROUP1_CLOUD_FOG_1 2
#define _UI_COMP_WEATHERGROUP1_NUM 3
lv_obj_t * ui_weathergroup1_create(lv_obj_t * comp_parent);

#endif
