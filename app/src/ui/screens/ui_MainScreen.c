// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.1
// LVGL version: 8.3.6
// Project name: Thermostat

#include "../ui.h"

void ui_MainScreen_screen_init(void)
{
    ui_MainScreen = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MainScreen, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM);      /// Flags
    lv_obj_set_scrollbar_mode(ui_MainScreen, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_MainScreen, lv_color_hex(0xB787E2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_MainScreen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_MainScreen, lv_color_hex(0xBE5757), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_MainScreen, LV_GRAD_DIR_HOR, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TimeLabel = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_TimeLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TimeLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TimeLabel, 3);
    lv_obj_set_y(ui_TimeLabel, 3);
    lv_label_set_long_mode(ui_TimeLabel, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_TimeLabel, "23:55:12");
    lv_obj_clear_flag(ui_TimeLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_TimeLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_TimeLabel, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_StatusLabel = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_StatusLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_StatusLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_StatusLabel, 2);
    lv_obj_set_y(ui_StatusLabel, -4);
    lv_obj_set_align(ui_StatusLabel, LV_ALIGN_BOTTOM_LEFT);
    lv_label_set_long_mode(ui_StatusLabel, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_StatusLabel, "Current:");
    lv_obj_clear_flag(ui_StatusLabel, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_StatusLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_StatusLabel, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempLabel = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_TempLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempLabel, -33);
    lv_obj_set_y(ui_TempLabel, 103);
    lv_obj_set_align(ui_TempLabel, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_TempLabel, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_TempLabel, "72°");
    lv_obj_set_style_text_align(ui_TempLabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_TempLabel, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_HumidityLabel = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_HumidityLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_HumidityLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_HumidityLabel, 21);
    lv_obj_set_y(ui_HumidityLabel, 103);
    lv_obj_set_align(ui_HumidityLabel, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_HumidityLabel, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_HumidityLabel, "62%");
    lv_obj_set_style_text_align(ui_HumidityLabel, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_HumidityLabel, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ModeDropdown = lv_dropdown_create(ui_MainScreen);
    lv_dropdown_set_options(ui_ModeDropdown, "Off\nIdle\nAuto\nHeat\nCool\nFan");
    lv_obj_set_width(ui_ModeDropdown, 99);
    lv_obj_set_height(ui_ModeDropdown, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ModeDropdown, 109);
    lv_obj_set_y(ui_ModeDropdown, -101);
    lv_obj_set_align(ui_ModeDropdown, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ModeDropdown, LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_ModeDropdown, LV_SCROLLBAR_MODE_OFF);

    ui_SetupBtn = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_SetupBtn, 90);
    lv_obj_set_height(ui_SetupBtn, 36);
    lv_obj_set_x(ui_SetupBtn, -2);
    lv_obj_set_y(ui_SetupBtn, -3);
    lv_obj_set_align(ui_SetupBtn, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_SetupBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_SetupBtn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_SetupBtn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_SetupBtn, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SetupBtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_SetupBtn, lv_color_hex(0x2620F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_SetupBtn, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SetupLabel = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_SetupLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SetupLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SetupLabel, -25);
    lv_obj_set_y(ui_SetupLabel, -14);
    lv_obj_set_align(ui_SetupLabel, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_long_mode(ui_SetupLabel, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_SetupLabel, "Setup");
    lv_obj_add_flag(ui_SetupLabel, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_clear_flag(ui_SetupLabel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_SetupLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_SetupLabel, lv_color_hex(0xFFE300), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_SetupLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SetTempBg1 = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_SetTempBg1, 134);
    lv_obj_set_height(ui_SetTempBg1, 134);
    lv_obj_set_x(ui_SetTempBg1, -71);
    lv_obj_set_y(ui_SetTempBg1, 11);
    lv_obj_set_align(ui_SetTempBg1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_SetTempBg1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_SetTempBg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SetTempBg1, lv_color_hex(0x7D7D7D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SetTempBg1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_SetTempBg1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_SetTempBg1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SetTempBg = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_SetTempBg, 110);
    lv_obj_set_height(ui_SetTempBg, 110);
    lv_obj_set_x(ui_SetTempBg, -71);
    lv_obj_set_y(ui_SetTempBg, 11);
    lv_obj_set_align(ui_SetTempBg, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_SetTempBg, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_SetTempBg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_SetTempBg, lv_color_hex(0x7A92B2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SetTempBg, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_SetTempBg, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_SetTempBg, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_SetTempBg, lv_color_hex(0x5F4F4F), LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SetTempBg, 255, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_TempArc = lv_arc_create(ui_MainScreen);
    lv_obj_set_width(ui_TempArc, 164);
    lv_obj_set_height(ui_TempArc, 164);
    lv_obj_set_x(ui_TempArc, -71);
    lv_obj_set_y(ui_TempArc, 11);
    lv_obj_set_align(ui_TempArc, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_TempArc, 450, 920);
    lv_arc_set_value(ui_TempArc, 700);

    ui_SetTemp = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_SetTemp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SetTemp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SetTemp, -71);
    lv_obj_set_y(ui_SetTemp, 11);
    lv_obj_set_align(ui_SetTemp, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_SetTemp, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_SetTemp, "82°");
    lv_obj_clear_flag(ui_SetTemp, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_SetTemp, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_font(ui_SetTemp, &lv_font_montserrat_44, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SetTempFrac = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_SetTempFrac, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SetTempFrac, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SetTempFrac, -46);
    lv_obj_set_y(ui_SetTempFrac, 22);
    lv_obj_set_align(ui_SetTempFrac, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_SetTempFrac, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_SetTempFrac, "5");
    lv_obj_add_flag(ui_SetTempFrac, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_SetTempFrac, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_SetTempFrac, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_align(ui_SetTempFrac, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_SetTempFrac, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempDecreaseBtn = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_TempDecreaseBtn, 45);
    lv_obj_set_height(ui_TempDecreaseBtn, 45);
    lv_obj_set_x(ui_TempDecreaseBtn, 39);
    lv_obj_set_y(ui_TempDecreaseBtn, 56);
    lv_obj_set_align(ui_TempDecreaseBtn, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TempDecreaseBtn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_TempDecreaseBtn, LV_BLEND_MODE_MULTIPLY, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempDecreaseLabel = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_TempDecreaseLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempDecreaseLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempDecreaseLabel, 39);
    lv_obj_set_y(ui_TempDecreaseLabel, 52);
    lv_obj_set_align(ui_TempDecreaseLabel, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_TempDecreaseLabel, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_TempDecreaseLabel, "-");
    lv_obj_set_style_text_font(ui_TempDecreaseLabel, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempIncreaseBtn = lv_obj_create(ui_MainScreen);
    lv_obj_set_width(ui_TempIncreaseBtn, 45);
    lv_obj_set_height(ui_TempIncreaseBtn, 45);
    lv_obj_set_x(ui_TempIncreaseBtn, 39);
    lv_obj_set_y(ui_TempIncreaseBtn, -40);
    lv_obj_set_align(ui_TempIncreaseBtn, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_TempIncreaseBtn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_blend_mode(ui_TempIncreaseBtn, LV_BLEND_MODE_MULTIPLY, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_TempIncreaseLabel = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_TempIncreaseLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TempIncreaseLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_TempIncreaseLabel, 39);
    lv_obj_set_y(ui_TempIncreaseLabel, -40);
    lv_obj_set_align(ui_TempIncreaseLabel, LV_ALIGN_CENTER);
    lv_label_set_long_mode(ui_TempIncreaseLabel, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_TempIncreaseLabel, "+");
    lv_obj_set_style_text_font(ui_TempIncreaseLabel, &lv_font_montserrat_48, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_InfoBtn = lv_btn_create(ui_MainScreen);
    lv_obj_set_width(ui_InfoBtn, 90);
    lv_obj_set_height(ui_InfoBtn, 36);
    lv_obj_set_x(ui_InfoBtn, -2);
    lv_obj_set_y(ui_InfoBtn, -45);
    lv_obj_set_align(ui_InfoBtn, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_InfoBtn, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_InfoBtn, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_InfoBtn, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_InfoBtn, lv_color_hex(0x2095F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_InfoBtn, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_color(ui_InfoBtn, lv_color_hex(0x2620F6), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_InfoBtn, LV_GRAD_DIR_VER, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_InfoLabel = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_InfoLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_InfoLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_InfoLabel, -33);
    lv_obj_set_y(ui_InfoLabel, -56);
    lv_obj_set_align(ui_InfoLabel, LV_ALIGN_BOTTOM_RIGHT);
    lv_label_set_long_mode(ui_InfoLabel, LV_LABEL_LONG_CLIP);
    lv_label_set_text(ui_InfoLabel, "Info");
    lv_obj_add_flag(ui_InfoLabel, LV_OBJ_FLAG_IGNORE_LAYOUT);     /// Flags
    lv_obj_clear_flag(ui_InfoLabel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_InfoLabel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_text_color(ui_InfoLabel, lv_color_hex(0xFFE300), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_InfoLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiIndicatorLabel = lv_label_create(ui_MainScreen);
    lv_obj_set_width(ui_WifiIndicatorLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WifiIndicatorLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WifiIndicatorLabel, 10);
    lv_obj_set_y(ui_WifiIndicatorLabel, -100);
    lv_obj_set_align(ui_WifiIndicatorLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WifiIndicatorLabel, "");
    lv_label_set_recolor(ui_WifiIndicatorLabel, "true");
    lv_obj_set_style_text_font(ui_WifiIndicatorLabel, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_TimeLabel, ui_event_TimeLabel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_StatusLabel, ui_event_StatusLabel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TempLabel, ui_event_TempLabel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_HumidityLabel, ui_event_HumidityLabel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ModeDropdown, ui_event_ModeDropdown, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SetupBtn, ui_event_SetupBtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TempArc, ui_event_TempArc, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TempDecreaseBtn, ui_event_TempDecreaseBtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TempIncreaseBtn, ui_event_TempIncreaseBtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_InfoBtn, ui_event_InfoBtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_MainScreen, ui_event_MainScreen, LV_EVENT_ALL, NULL);

}
