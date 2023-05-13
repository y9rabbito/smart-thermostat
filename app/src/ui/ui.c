// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: Thermostat

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
void ui_event_Screen1(lv_event_t * e);
lv_obj_t * ui_Screen1;
void ui_event_Time(lv_event_t * e);
lv_obj_t * ui_Time;
void ui_event_Label1(lv_event_t * e);
lv_obj_t * ui_Label1;
void ui_event_Temp(lv_event_t * e);
lv_obj_t * ui_Temp;
void ui_event_Humidity(lv_event_t * e);
lv_obj_t * ui_Humidity;
void ui_event_ModeDropdown(lv_event_t * e);
lv_obj_t * ui_ModeDropdown;
lv_obj_t * ui_ConfigButton;
lv_obj_t * ui_SetupBtn;
void ui_event_Arc2(lv_event_t * e);
lv_obj_t * ui_Arc2;
lv_obj_t * ui_SetTemp;
void ui_event_Panel1(lv_event_t * e);
lv_obj_t * ui_Panel1;
lv_obj_t * ui_Label4;
void ui_event_Panel2(lv_event_t * e);
lv_obj_t * ui_Panel2;
lv_obj_t * ui_Label3;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
//    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_Screen1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        tftAwaken(e);
    }
}
void ui_event_Time(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        tftAwaken(e);
    }
}
void ui_event_Label1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        tftAwaken(e);
    }
}
void ui_event_Temp(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        tftAwaken(e);
    }
}
void ui_event_Humidity(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        tftAwaken(e);
    }
}
void ui_event_ModeDropdown(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        tftHvacModeChange(e);
    }
    if(event_code == LV_EVENT_CLICKED) {
        tftStopTouchTimer(e);
    }
}
void ui_event_Arc2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_RELEASED) {
        _ui_arc_set_text_value(ui_SetTemp, target, "", "°");
        tftUpdateTempSet(e);
        tftAwaken(e);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_SetTemp, target, "", "°");
        tftUpdateTempSet(e);
    }
}
void ui_event_Panel1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_arc_increment(ui_Arc2, -1);
    }
    if(event_code == LV_EVENT_CLICKED) {
        tftAwaken(e);
    }
}
void ui_event_Panel2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_arc_increment(ui_Arc2, 1);
    }
    if(event_code == LV_EVENT_CLICKED) {
        tftAwaken(e);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Screen1_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_Screen1);
}
