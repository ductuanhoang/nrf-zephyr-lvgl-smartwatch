// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: Smartwatch_240_240


#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

uint32_t LV_EVENT_GET_COMP_CHILD;

typedef struct {
    uint32_t child_idx;
    lv_obj_t * child;
} ui_comp_get_child_t;

lv_obj_t * ui_comp_get_child(lv_obj_t * comp, uint32_t child_idx)
{
    ui_comp_get_child_t info;
    info.child = NULL;
    info.child_idx = child_idx;
    lv_event_send(comp, LV_EVENT_GET_COMP_CHILD, &info);
    return info.child;
}

void get_component_child_event_cb(lv_event_t * e)
{
    lv_obj_t ** c = lv_event_get_user_data(e);
    ui_comp_get_child_t * info = lv_event_get_param(e);
    info->child = c[info->child_idx];
}

void del_component_child_event_cb(lv_event_t * e)
{
    lv_obj_t ** c = lv_event_get_user_data(e);
    lv_mem_free(c);
}


// COMPONENT battery_group

lv_obj_t * ui_battery_group_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_battery_group;
    cui_battery_group = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_battery_group, 77);
    lv_obj_set_height(cui_battery_group, 22);
    lv_obj_set_x(cui_battery_group, 0);
    lv_obj_set_y(cui_battery_group, 20);
    lv_obj_set_align(cui_battery_group, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(cui_battery_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(cui_battery_group, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(cui_battery_group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_battery_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_battery_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(cui_battery_group, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(cui_battery_group, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_flash;
    cui_flash = lv_img_create(cui_battery_group);
    lv_img_set_src(cui_flash, &ui_img_flash_png);
    lv_obj_set_width(cui_flash, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_flash, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_flash, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_flash, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_flash, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t * cui_battery_percent;
    cui_battery_percent = lv_label_create(cui_battery_group);
    lv_obj_set_width(cui_battery_percent, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_battery_percent, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_battery_percent, LV_ALIGN_CENTER);
    lv_label_set_text(cui_battery_percent, "86%");
    lv_obj_set_style_text_color(cui_battery_percent, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_battery_percent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_battery_percent, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BATTERY_GROUP_NUM);
    children[UI_COMP_BATTERY_GROUP_BATTERY_GROUP] = cui_battery_group;
    children[UI_COMP_BATTERY_GROUP_FLASH] = cui_flash;
    children[UI_COMP_BATTERY_GROUP_BATTERY_PERCENT] = cui_battery_percent;
    lv_obj_add_event_cb(cui_battery_group, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_battery_group, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_battery_group;
}



// COMPONENT buttondown

lv_obj_t * ui_buttondown_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_buttondown;
    cui_buttondown = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_buttondown, 70);
    lv_obj_set_height(cui_buttondown, 70);
    lv_obj_set_x(cui_buttondown, 146);
    lv_obj_set_y(cui_buttondown, 102);
    lv_obj_set_align(cui_buttondown, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_buttondown, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_buttondown, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_buttondown, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_buttondown, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_buttondown, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(cui_buttondown, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(cui_buttondown, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(cui_buttondown, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    lv_obj_t * cui_button_down_icon;
    cui_button_down_icon = lv_img_create(cui_buttondown);
    lv_obj_set_width(cui_button_down_icon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_button_down_icon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_button_down_icon, -12);
    lv_obj_set_y(cui_button_down_icon, -9);
    lv_obj_set_align(cui_button_down_icon, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_button_down_icon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_button_down_icon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t * cui_line;
    cui_line = lv_img_create(cui_buttondown);
    lv_obj_set_width(cui_line, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_line, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_line, 8);
    lv_obj_set_y(cui_line, 7);
    lv_obj_set_align(cui_line, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_line, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_line, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BUTTONDOWN_NUM);
    children[UI_COMP_BUTTONDOWN_BUTTONDOWN] = cui_buttondown;
    children[UI_COMP_BUTTONDOWN_BUTTON_DOWN_ICON] = cui_button_down_icon;
    children[UI_COMP_BUTTONDOWN_LINE] = cui_line;
    lv_obj_add_event_cb(cui_buttondown, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_buttondown, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_buttondown;
}



// COMPONENT buttonround

lv_obj_t * ui_buttonround_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_buttonround;
    cui_buttonround = lv_btn_create(comp_parent);
    lv_obj_set_width(cui_buttonround, 65);
    lv_obj_set_height(cui_buttonround, 65);
    lv_obj_set_x(cui_buttonround, 0);
    lv_obj_set_y(cui_buttonround, -45);
    lv_obj_set_align(cui_buttonround, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(cui_buttonround, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(cui_buttonround, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_buttonround, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_buttonround, lv_color_hex(0xEE1C18), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_buttonround, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_outline_color(cui_buttonround, lv_color_hex(0xEE1C18), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_opa(cui_buttonround, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_width(cui_buttonround, 3, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_outline_pad(cui_buttonround, 0, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_color(cui_buttonround, lv_color_hex(0xEE1C18), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_opa(cui_buttonround, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(cui_buttonround, 50, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_shadow_spread(cui_buttonround, 2, LV_PART_MAIN | LV_STATE_PRESSED);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BUTTONROUND_NUM);
    children[UI_COMP_BUTTONROUND_BUTTONROUND] = cui_buttonround;
    lv_obj_add_event_cb(cui_buttonround, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_buttonround, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_buttonround;
}



// COMPONENT buttontop

lv_obj_t * ui_buttontop_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_buttontop;
    cui_buttontop = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_buttontop, 70);
    lv_obj_set_height(cui_buttontop, 70);
    lv_obj_set_x(cui_buttontop, 145);
    lv_obj_set_y(cui_buttontop, -105);
    lv_obj_set_align(cui_buttontop, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_buttontop, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_buttontop, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_buttontop, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_buttontop, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_buttontop, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(cui_buttontop, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(cui_buttontop, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(cui_buttontop, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    lv_obj_t * cui_button_top_icon;
    cui_button_top_icon = lv_img_create(cui_buttontop);
    lv_obj_set_width(cui_button_top_icon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_button_top_icon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_button_top_icon, -10);
    lv_obj_set_y(cui_button_top_icon, 7);
    lv_obj_set_align(cui_button_top_icon, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_button_top_icon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_button_top_icon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t * cui_line;
    cui_line = lv_img_create(cui_buttontop);
    lv_obj_set_width(cui_line, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_line, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_line, 9);
    lv_obj_set_y(cui_line, -3);
    lv_obj_set_align(cui_line, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_line, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_line, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BUTTONTOP_NUM);
    children[UI_COMP_BUTTONTOP_BUTTONTOP] = cui_buttontop;
    children[UI_COMP_BUTTONTOP_BUTTON_TOP_ICON] = cui_button_top_icon;
    children[UI_COMP_BUTTONTOP_LINE] = cui_line;
    lv_obj_add_event_cb(cui_buttontop, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_buttontop, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_buttontop;
}



// COMPONENT button_center

lv_obj_t * ui_button_center_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_button_center;
    cui_button_center = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_button_center, 71);
    lv_obj_set_height(cui_button_center, 70);
    lv_obj_set_x(cui_button_center, 179);
    lv_obj_set_y(cui_button_center, 0);
    lv_obj_set_align(cui_button_center, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_button_center, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(cui_button_center, 200, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_button_center, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_button_center, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cui_button_center, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(cui_button_center, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(cui_button_center, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(cui_button_center, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    lv_obj_t * cui_button_center_icon;
    cui_button_center_icon = lv_img_create(cui_button_center);
    lv_obj_set_width(cui_button_center_icon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_button_center_icon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_button_center_icon, -15);
    lv_obj_set_y(cui_button_center_icon, 0);
    lv_obj_set_align(cui_button_center_icon, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_button_center_icon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_button_center_icon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t * cui_line2;
    cui_line2 = lv_img_create(cui_button_center);
    lv_obj_set_width(cui_line2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_line2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_line2, 9);
    lv_obj_set_y(cui_line2, 0);
    lv_obj_set_align(cui_line2, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_line2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_line2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BUTTON_CENTER_NUM);
    children[UI_COMP_BUTTON_CENTER_BUTTON_CENTER] = cui_button_center;
    children[UI_COMP_BUTTON_CENTER_BUTTON_CENTER_ICON] = cui_button_center_icon;
    children[UI_COMP_BUTTON_CENTER_LINE2] = cui_line2;
    lv_obj_add_event_cb(cui_button_center, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_button_center, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_button_center;
}



void ui_event_comp_daily_mission_group_daily_mission_arc(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    lv_obj_t ** comp_daily_mission_group = lv_event_get_user_data(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(comp_daily_mission_group[UI_COMP_DAILY_MISSION_GROUP_MISSION_PERCENT], target, "", "%");
    }
}

// COMPONENT daily_mission_group

lv_obj_t * ui_daily_mission_group_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_daily_mission_group;
    cui_daily_mission_group = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_daily_mission_group, 283);
    lv_obj_set_height(cui_daily_mission_group, 185);
    lv_obj_set_align(cui_daily_mission_group, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_clear_flag(cui_daily_mission_group, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_daily_mission_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_daily_mission_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_mission_percent;
    cui_mission_percent = lv_label_create(cui_daily_mission_group);
    lv_obj_set_width(cui_mission_percent, LV_SIZE_CONTENT);   /// 90
    lv_obj_set_height(cui_mission_percent, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_mission_percent, 207);
    lv_obj_set_y(cui_mission_percent, -17);
    lv_obj_set_align(cui_mission_percent, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_text(cui_mission_percent, "87%");
    lv_obj_set_style_text_color(cui_mission_percent, lv_color_hex(0xEE1E1E), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_mission_percent, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_mission_percent, &ui_font_Subtitle, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_daily_mission_image;
    cui_daily_mission_image = lv_img_create(cui_daily_mission_group);
    lv_obj_set_width(cui_daily_mission_image, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_daily_mission_image, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_daily_mission_image, -58);
    lv_obj_set_y(cui_daily_mission_image, -23);
    lv_obj_set_align(cui_daily_mission_image, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_daily_mission_image, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_daily_mission_image, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t * cui_daily_mission_arc;
    cui_daily_mission_arc = lv_arc_create(cui_daily_mission_group);
    lv_obj_set_width(cui_daily_mission_arc, 330);
    lv_obj_set_height(cui_daily_mission_arc, 330);
    lv_obj_set_x(cui_daily_mission_arc, 50);
    lv_obj_set_y(cui_daily_mission_arc, -98);
    lv_obj_set_align(cui_daily_mission_arc, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_daily_mission_arc, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_arc_set_value(cui_daily_mission_arc, 87);
    lv_arc_set_bg_angles(cui_daily_mission_arc, 88, 170);
    lv_obj_set_style_arc_color(cui_daily_mission_arc, lv_color_hex(0x303030), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(cui_daily_mission_arc, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(cui_daily_mission_arc, true, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(cui_daily_mission_arc, lv_color_hex(0xB0E14A), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(cui_daily_mission_arc, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_rounded(cui_daily_mission_arc, true, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(cui_daily_mission_arc, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_daily_mission_arc, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_DAILY_MISSION_GROUP_NUM);
    children[UI_COMP_DAILY_MISSION_GROUP_DAILY_MISSION_GROUP] = cui_daily_mission_group;
    children[UI_COMP_DAILY_MISSION_GROUP_MISSION_PERCENT] = cui_mission_percent;
    children[UI_COMP_DAILY_MISSION_GROUP_DAILY_MISSION_IMAGE] = cui_daily_mission_image;
    children[UI_COMP_DAILY_MISSION_GROUP_DAILY_MISSION_ARC] = cui_daily_mission_arc;
    lv_obj_add_event_cb(cui_daily_mission_group, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_daily_mission_group, del_component_child_event_cb, LV_EVENT_DELETE, children);
    lv_obj_add_event_cb(cui_daily_mission_arc, ui_event_comp_daily_mission_group_daily_mission_arc, LV_EVENT_ALL, children);
    return cui_daily_mission_group;
}



// COMPONENT date_group

lv_obj_t * ui_date_group_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_date_group;
    cui_date_group = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_date_group, 100);
    lv_obj_set_height(cui_date_group, 82);
    lv_obj_set_x(cui_date_group, 58);
    lv_obj_set_y(cui_date_group, 53);
    lv_obj_set_align(cui_date_group, LV_ALIGN_TOP_MID);
    lv_obj_set_flex_flow(cui_date_group, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(cui_date_group, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(cui_date_group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_date_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_date_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_day;
    cui_day = lv_label_create(cui_date_group);
    lv_obj_set_width(cui_day, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_day, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_day, LV_ALIGN_CENTER);
    lv_label_set_text(cui_day, "MON");
    lv_obj_set_style_text_color(cui_day, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_day, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_day, &ui_font_Subtitle, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_month;
    cui_month = lv_label_create(cui_date_group);
    lv_obj_set_width(cui_month, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_month, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_month, LV_ALIGN_CENTER);
    lv_label_set_text(cui_month, "18 FEB");
    lv_obj_set_style_text_color(cui_month, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_month, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_month, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_year;
    cui_year = lv_label_create(cui_date_group);
    lv_obj_set_width(cui_year, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_year, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_year, LV_ALIGN_CENTER);
    lv_label_set_text(cui_year, "2022");
    lv_obj_set_style_text_color(cui_year, lv_color_hex(0x6B6B6B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_year, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_year, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_DATE_GROUP_NUM);
    children[UI_COMP_DATE_GROUP_DATE_GROUP] = cui_date_group;
    children[UI_COMP_DATE_GROUP_DAY] = cui_day;
    children[UI_COMP_DATE_GROUP_MONTH] = cui_month;
    children[UI_COMP_DATE_GROUP_YEAR] = cui_year;
    lv_obj_add_event_cb(cui_date_group, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_date_group, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_date_group;
}



// COMPONENT forecastgroup

lv_obj_t * ui_forecastgroup_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_forecastgroup;
    cui_forecastgroup = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_forecastgroup, 259);
    lv_obj_set_height(cui_forecastgroup, 50);
    lv_obj_set_x(cui_forecastgroup, 9);
    lv_obj_set_y(cui_forecastgroup, 79);
    lv_obj_set_align(cui_forecastgroup, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_forecastgroup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_forecastgroup, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_forecastgroup, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_forecastgroup, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_forecastgroup, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_forecastgroup, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_forecastgroup, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_day1;
    cui_day1 = lv_label_create(cui_forecastgroup);
    lv_obj_set_width(cui_day1, 53);
    lv_obj_set_height(cui_day1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_day1, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_text_color(cui_day1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_day1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_day1, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_degree_group;
    cui_degree_group = lv_obj_create(cui_forecastgroup);
    lv_obj_set_width(cui_degree_group, 100);
    lv_obj_set_height(cui_degree_group, 38);
    lv_obj_set_align(cui_degree_group, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_degree_group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_degree_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_degree_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_daytime;
    cui_daytime = lv_label_create(cui_degree_group);
    lv_obj_set_width(cui_daytime, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_daytime, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_daytime, LV_ALIGN_LEFT_MID);
    lv_label_set_text(cui_daytime, "25°");
    lv_obj_set_style_text_color(cui_daytime, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_daytime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_daytime, &ui_font_H1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_nighttime;
    cui_nighttime = lv_label_create(cui_degree_group);
    lv_obj_set_width(cui_nighttime, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_nighttime, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_nighttime, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(cui_nighttime, "25°");
    lv_obj_set_style_text_color(cui_nighttime, lv_color_hex(0x737373), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_nighttime, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_nighttime, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_cloud_sun;
    cui_cloud_sun = lv_img_create(cui_forecastgroup);
    lv_obj_set_width(cui_cloud_sun, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_cloud_sun, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_cloud_sun, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(cui_cloud_sun, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_cloud_sun, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_FORECASTGROUP_NUM);
    children[UI_COMP_FORECASTGROUP_FORECASTGROUP] = cui_forecastgroup;
    children[UI_COMP_FORECASTGROUP_DAY1] = cui_day1;
    children[UI_COMP_FORECASTGROUP_DEGREE_GROUP] = cui_degree_group;
    children[UI_COMP_FORECASTGROUP_DEGREE_GROUP_DAYTIME] = cui_daytime;
    children[UI_COMP_FORECASTGROUP_DEGREE_GROUP_NIGHTTIME] = cui_nighttime;
    children[UI_COMP_FORECASTGROUP_CLOUD_SUN] = cui_cloud_sun;
    lv_obj_add_event_cb(cui_forecastgroup, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_forecastgroup, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_forecastgroup;
}



// COMPONENT pulsegroup

lv_obj_t * ui_pulsegroup_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_pulsegroup;
    cui_pulsegroup = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_pulsegroup, 181);
    lv_obj_set_height(cui_pulsegroup, 50);
    lv_obj_set_x(cui_pulsegroup, 0);
    lv_obj_set_y(cui_pulsegroup, 70);
    lv_obj_set_align(cui_pulsegroup, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(cui_pulsegroup, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(cui_pulsegroup, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(cui_pulsegroup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_pulsegroup, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_pulsegroup, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(cui_pulsegroup, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(cui_pulsegroup, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_heart;
    cui_heart = lv_img_create(cui_pulsegroup);
    lv_obj_set_width(cui_heart, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_heart, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_heart, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_heart, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_heart, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t * cui_pulse_number;
    cui_pulse_number = lv_label_create(cui_pulsegroup);
    lv_obj_set_width(cui_pulse_number, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_pulse_number, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_pulse_number, LV_ALIGN_CENTER);
    lv_label_set_text(cui_pulse_number, "63");
    lv_obj_set_style_text_color(cui_pulse_number, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_pulse_number, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_pulse_number, &ui_font_H1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_bpm;
    cui_bpm = lv_label_create(cui_pulsegroup);
    lv_obj_set_width(cui_bpm, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_bpm, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_bpm, LV_ALIGN_CENTER);
    lv_label_set_text(cui_bpm, "bpm");
    lv_obj_set_style_text_color(cui_bpm, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_bpm, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_bpm, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_PULSEGROUP_NUM);
    children[UI_COMP_PULSEGROUP_PULSEGROUP] = cui_pulsegroup;
    children[UI_COMP_PULSEGROUP_HEART] = cui_heart;
    children[UI_COMP_PULSEGROUP_PULSE_NUMBER] = cui_pulse_number;
    children[UI_COMP_PULSEGROUP_BPM] = cui_bpm;
    lv_obj_add_event_cb(cui_pulsegroup, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_pulsegroup, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_pulsegroup;
}



// COMPONENT step_group

lv_obj_t * ui_step_group_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_step_group;
    cui_step_group = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_step_group, 100);
    lv_obj_set_height(cui_step_group, 26);
    lv_obj_set_x(cui_step_group, 0);
    lv_obj_set_y(cui_step_group, -40);
    lv_obj_set_align(cui_step_group, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_flex_flow(cui_step_group, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(cui_step_group, LV_FLEX_ALIGN_END, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(cui_step_group, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_step_group, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_step_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(cui_step_group, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(cui_step_group, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_step;
    cui_step = lv_img_create(cui_step_group);
    lv_obj_set_width(cui_step, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_step, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_step, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_step, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_step, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t * cui_step_label;
    cui_step_label = lv_label_create(cui_step_group);
    lv_obj_set_width(cui_step_label, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_step_label, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_step_label, 2);
    lv_obj_set_y(cui_step_label, -4);
    lv_obj_set_align(cui_step_label, LV_ALIGN_CENTER);
    lv_label_set_text(cui_step_label, "1526");
    lv_obj_set_style_text_color(cui_step_label, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_step_label, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_step_label, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_STEP_GROUP_NUM);
    children[UI_COMP_STEP_GROUP_STEP_GROUP] = cui_step_group;
    children[UI_COMP_STEP_GROUP_STEP] = cui_step;
    children[UI_COMP_STEP_GROUP_STEP_LABEL] = cui_step_label;
    lv_obj_add_event_cb(cui_step_group, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_step_group, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_step_group;
}



// COMPONENT titlegroup

lv_obj_t * ui_titlegroup_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_titlegroup;
    cui_titlegroup = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_titlegroup, 200);
    lv_obj_set_height(cui_titlegroup, 50);
    lv_obj_set_x(cui_titlegroup, 13);
    lv_obj_set_y(cui_titlegroup, -83);
    lv_obj_set_align(cui_titlegroup, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_titlegroup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_titlegroup, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_titlegroup, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_title;
    cui_title = lv_label_create(cui_titlegroup);
    lv_obj_set_width(cui_title, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_title, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_title, LV_ALIGN_TOP_MID);
    lv_label_set_text(cui_title, "title");
    lv_obj_set_style_text_color(cui_title, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_title, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_title, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_subtitle;
    cui_subtitle = lv_label_create(cui_titlegroup);
    lv_obj_set_width(cui_subtitle, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_subtitle, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_subtitle, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(cui_subtitle, "subtitle");
    lv_obj_set_style_text_color(cui_subtitle, lv_color_hex(0x6D6D6D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_subtitle, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_subtitle, &ui_font_Title, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_TITLEGROUP_NUM);
    children[UI_COMP_TITLEGROUP_TITLEGROUP] = cui_titlegroup;
    children[UI_COMP_TITLEGROUP_TITLE] = cui_title;
    children[UI_COMP_TITLEGROUP_SUBTITLE] = cui_subtitle;
    lv_obj_add_event_cb(cui_titlegroup, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_titlegroup, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_titlegroup;
}



// COMPONENT todayweathergroup

lv_obj_t * ui_todayweathergroup_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_todayweathergroup;
    cui_todayweathergroup = lv_obj_create(comp_parent);
    lv_obj_set_height(cui_todayweathergroup, 108);
    lv_obj_set_width(cui_todayweathergroup, LV_SIZE_CONTENT);   /// 82
    lv_obj_set_align(cui_todayweathergroup, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(cui_todayweathergroup, LV_FLEX_FLOW_COLUMN_REVERSE);
    lv_obj_set_flex_align(cui_todayweathergroup, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(cui_todayweathergroup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_todayweathergroup, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_todayweathergroup, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(cui_todayweathergroup, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(cui_todayweathergroup, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_degree_6;
    cui_degree_6 = lv_label_create(cui_todayweathergroup);
    lv_obj_set_width(cui_degree_6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_degree_6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_degree_6, 8);
    lv_obj_set_y(cui_degree_6, 0);
    lv_obj_set_align(cui_degree_6, LV_ALIGN_CENTER);
    lv_label_set_text(cui_degree_6, "25°");
    lv_obj_set_style_text_color(cui_degree_6, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_degree_6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_degree_6, &ui_font_H1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_cloud_sun;
    cui_cloud_sun = lv_img_create(cui_todayweathergroup);
    lv_obj_set_width(cui_cloud_sun, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_cloud_sun, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_cloud_sun, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_cloud_sun, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_cloud_sun, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t * cui_degree_8;
    cui_degree_8 = lv_label_create(cui_todayweathergroup);
    lv_obj_set_width(cui_degree_8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_degree_8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_degree_8, 8);
    lv_obj_set_y(cui_degree_8, 0);
    lv_obj_set_align(cui_degree_8, LV_ALIGN_CENTER);
    lv_label_set_text(cui_degree_8, "Now");
    lv_obj_set_style_text_color(cui_degree_8, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_degree_8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_degree_8, &ui_font_Subtitle, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_TODAYWEATHERGROUP_NUM);
    children[UI_COMP_TODAYWEATHERGROUP_TODAYWEATHERGROUP] = cui_todayweathergroup;
    children[UI_COMP_TODAYWEATHERGROUP_DEGREE_6] = cui_degree_6;
    children[UI_COMP_TODAYWEATHERGROUP_CLOUD_SUN] = cui_cloud_sun;
    children[UI_COMP_TODAYWEATHERGROUP_DEGREE_8] = cui_degree_8;
    lv_obj_add_event_cb(cui_todayweathergroup, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_todayweathergroup, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_todayweathergroup;
}



// COMPONENT weathergroup1

lv_obj_t * ui_weathergroup1_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_weathergroup1;
    cui_weathergroup1 = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_weathergroup1, 106);
    lv_obj_set_height(cui_weathergroup1, 44);
    lv_obj_set_x(cui_weathergroup1, -55);
    lv_obj_set_y(cui_weathergroup1, 32);
    lv_obj_set_align(cui_weathergroup1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(cui_weathergroup1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(cui_weathergroup1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(cui_weathergroup1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_weathergroup1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_weathergroup1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_degree_1;
    cui_degree_1 = lv_label_create(cui_weathergroup1);
    lv_obj_set_width(cui_degree_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_degree_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_degree_1, LV_ALIGN_CENTER);
    lv_label_set_text(cui_degree_1, "25°");
    lv_obj_set_style_text_color(cui_degree_1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_degree_1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_degree_1, &ui_font_H1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_cloud_fog_1;
    cui_cloud_fog_1 = lv_img_create(cui_weathergroup1);
    lv_obj_set_width(cui_cloud_fog_1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_cloud_fog_1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(cui_cloud_fog_1, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_cloud_fog_1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(cui_cloud_fog_1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_WEATHERGROUP1_NUM);
    children[UI_COMP_WEATHERGROUP1_WEATHERGROUP1] = cui_weathergroup1;
    children[UI_COMP_WEATHERGROUP1_DEGREE_1] = cui_degree_1;
    children[UI_COMP_WEATHERGROUP1_CLOUD_FOG_1] = cui_cloud_fog_1;
    lv_obj_add_event_cb(cui_weathergroup1, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_weathergroup1, del_component_child_event_cb, LV_EVENT_DELETE, children);
    return cui_weathergroup1;
}

