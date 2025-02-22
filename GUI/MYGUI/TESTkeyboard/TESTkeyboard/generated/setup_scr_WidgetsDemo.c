/*
* Copyright 2024 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_WidgetsDemo(lv_ui *ui)
{
	//Write codes WidgetsDemo
	ui->WidgetsDemo = lv_obj_create(NULL);
	ui->g_kb_WidgetsDemo = lv_keyboard_create(ui->WidgetsDemo);
	lv_obj_add_event_cb(ui->g_kb_WidgetsDemo, kb_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_flag(ui->g_kb_WidgetsDemo, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_style_text_font(ui->g_kb_WidgetsDemo, &lv_font_SourceHanSerifSC_Regular_18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_size(ui->WidgetsDemo, 800, 480);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_tabview_Main
	ui->WidgetsDemo_tabview_Main = lv_tabview_create(ui->WidgetsDemo, LV_DIR_TOP, 80);
	lv_obj_set_pos(ui->WidgetsDemo_tabview_Main, 0, 0);
	lv_obj_set_size(ui->WidgetsDemo_tabview_Main, 800, 480);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_tabview_Main, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_tabview_Main, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_tabview_Main, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_tabview_Main, lv_color_hex(0xeaeff3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_tabview_Main, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_tabview_Main, lv_color_hex(0x4d4d4d), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_tabview_Main, &lv_font_montserratMedium_19, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_tabview_Main, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_tabview_Main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_tabview_Main, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_tabview_Main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_tabview_Main, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_tabview_Main, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_WidgetsDemo_tabview_Main_extra_btnm_main_default
	static lv_style_t style_WidgetsDemo_tabview_Main_extra_btnm_main_default;
	ui_init_style(&style_WidgetsDemo_tabview_Main_extra_btnm_main_default);
	
	lv_style_set_bg_opa(&style_WidgetsDemo_tabview_Main_extra_btnm_main_default, 255);
	lv_style_set_bg_color(&style_WidgetsDemo_tabview_Main_extra_btnm_main_default, lv_color_hex(0xffffff));
	lv_style_set_bg_grad_dir(&style_WidgetsDemo_tabview_Main_extra_btnm_main_default, LV_GRAD_DIR_NONE);
	lv_style_set_border_width(&style_WidgetsDemo_tabview_Main_extra_btnm_main_default, 0);
	lv_style_set_radius(&style_WidgetsDemo_tabview_Main_extra_btnm_main_default, 0);
	lv_obj_add_style(lv_tabview_get_tab_btns(ui->WidgetsDemo_tabview_Main), &style_WidgetsDemo_tabview_Main_extra_btnm_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_WidgetsDemo_tabview_Main_extra_btnm_items_default
	static lv_style_t style_WidgetsDemo_tabview_Main_extra_btnm_items_default;
	ui_init_style(&style_WidgetsDemo_tabview_Main_extra_btnm_items_default);
	
	lv_style_set_text_color(&style_WidgetsDemo_tabview_Main_extra_btnm_items_default, lv_color_hex(0x4d4d4d));
	lv_style_set_text_font(&style_WidgetsDemo_tabview_Main_extra_btnm_items_default, &lv_font_montserratMedium_32);
	lv_style_set_text_opa(&style_WidgetsDemo_tabview_Main_extra_btnm_items_default, 255);
	lv_obj_add_style(lv_tabview_get_tab_btns(ui->WidgetsDemo_tabview_Main), &style_WidgetsDemo_tabview_Main_extra_btnm_items_default, LV_PART_ITEMS|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for &style_WidgetsDemo_tabview_Main_extra_btnm_items_checked
	static lv_style_t style_WidgetsDemo_tabview_Main_extra_btnm_items_checked;
	ui_init_style(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked);
	
	lv_style_set_text_color(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, lv_color_hex(0x2196F3));
	lv_style_set_text_font(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, &lv_font_montserratMedium_32);
	lv_style_set_text_opa(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, 255);
	lv_style_set_border_width(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, 4);
	lv_style_set_border_opa(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, 255);
	lv_style_set_border_color(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, lv_color_hex(0x2196F3));
	lv_style_set_border_side(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, LV_BORDER_SIDE_BOTTOM);
	lv_style_set_radius(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, 0);
	lv_style_set_bg_opa(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, 60);
	lv_style_set_bg_color(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, lv_color_hex(0x2196F3));
	lv_style_set_bg_grad_dir(&style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_tabview_get_tab_btns(ui->WidgetsDemo_tabview_Main), &style_WidgetsDemo_tabview_Main_extra_btnm_items_checked, LV_PART_ITEMS|LV_STATE_CHECKED);

	//Write codes Profile
	ui->WidgetsDemo_tabview_Main_tab_1 = lv_tabview_add_tab(ui->WidgetsDemo_tabview_Main,"Profile");
	lv_obj_t * WidgetsDemo_tabview_Main_tab_1_label = lv_label_create(ui->WidgetsDemo_tabview_Main_tab_1);
	lv_label_set_text(WidgetsDemo_tabview_Main_tab_1_label, "");

	//Write codes WidgetsDemo_cont_Skills
	ui->WidgetsDemo_cont_Skills = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_1);
	lv_obj_set_pos(ui->WidgetsDemo_cont_Skills, 400, 400);
	lv_obj_set_size(ui->WidgetsDemo_cont_Skills, 345, 600);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_Skills, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_Skills, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_Skills, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_Skills, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_Skills, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_Skills, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_Skills, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_Skills, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_Skills, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_Skills, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_Skills, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_Skills, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_Skills, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_Skills, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_Skills, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_sw_TeamPlayer
	ui->WidgetsDemo_sw_TeamPlayer = lv_switch_create(ui->WidgetsDemo_cont_Skills);
	lv_obj_set_pos(ui->WidgetsDemo_sw_TeamPlayer, 23, 390);
	lv_obj_set_size(ui->WidgetsDemo_sw_TeamPlayer, 80, 49);

	//Write style for WidgetsDemo_sw_TeamPlayer, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_sw_TeamPlayer, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_sw_TeamPlayer, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_sw_TeamPlayer, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_sw_TeamPlayer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_sw_TeamPlayer, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_sw_TeamPlayer, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_sw_TeamPlayer, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_sw_TeamPlayer, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_sw_TeamPlayer, lv_color_hex(0x2196F3), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_sw_TeamPlayer, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->WidgetsDemo_sw_TeamPlayer, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for WidgetsDemo_sw_TeamPlayer, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_sw_TeamPlayer, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_sw_TeamPlayer, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_sw_TeamPlayer, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_sw_TeamPlayer, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_sw_TeamPlayer, 177, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_sw_HardWork
	ui->WidgetsDemo_sw_HardWork = lv_switch_create(ui->WidgetsDemo_cont_Skills);
	lv_obj_set_pos(ui->WidgetsDemo_sw_HardWork, 23, 268);
	lv_obj_set_size(ui->WidgetsDemo_sw_HardWork, 80, 49);

	//Write style for WidgetsDemo_sw_HardWork, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_sw_HardWork, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_sw_HardWork, lv_color_hex(0xe6e2e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_sw_HardWork, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_sw_HardWork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_sw_HardWork, 24, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_sw_HardWork, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_sw_HardWork, Part: LV_PART_INDICATOR, State: LV_STATE_CHECKED.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_sw_HardWork, 255, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_sw_HardWork, lv_color_hex(0x2196F3), LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_sw_HardWork, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_CHECKED);
	lv_obj_set_style_border_width(ui->WidgetsDemo_sw_HardWork, 0, LV_PART_INDICATOR|LV_STATE_CHECKED);

	//Write style for WidgetsDemo_sw_HardWork, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_sw_HardWork, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_sw_HardWork, lv_color_hex(0xffffff), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_sw_HardWork, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_sw_HardWork, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_sw_HardWork, 177, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_slider_Exp
	ui->WidgetsDemo_slider_Exp = lv_slider_create(ui->WidgetsDemo_cont_Skills);
	lv_slider_set_range(ui->WidgetsDemo_slider_Exp, 0, 100);
	lv_slider_set_mode(ui->WidgetsDemo_slider_Exp, LV_SLIDER_MODE_NORMAL);
	lv_slider_set_value(ui->WidgetsDemo_slider_Exp, 50, LV_ANIM_OFF);
	lv_obj_set_pos(ui->WidgetsDemo_slider_Exp, 25, 153);
	lv_obj_set_size(ui->WidgetsDemo_slider_Exp, 266, 20);

	//Write style for WidgetsDemo_slider_Exp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_slider_Exp, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_slider_Exp, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_slider_Exp, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_slider_Exp, 88, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_outline_width(ui->WidgetsDemo_slider_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_slider_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_slider_Exp, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_slider_Exp, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_slider_Exp, lv_color_hex(0x2196F3), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_slider_Exp, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_slider_Exp, 88, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_slider_Exp, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_slider_Exp, 255, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_slider_Exp, lv_color_hex(0x2196F3), LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_slider_Exp, LV_GRAD_DIR_NONE, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_slider_Exp, 88, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Skils
	ui->WidgetsDemo_label_Skils = lv_label_create(ui->WidgetsDemo_cont_Skills);
	lv_label_set_text(ui->WidgetsDemo_label_Skils, "Your skills");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Skils, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Skils, 20, 17);
	lv_obj_set_size(ui->WidgetsDemo_label_Skils, 236, 56);

	//Write style for WidgetsDemo_label_Skils, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Skils, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Skils, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Skils, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Skils, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Skils, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Skils, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Skils, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Skils, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Skils, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Skils, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Skils, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Skils, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Skils, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Skils, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_TP
	ui->WidgetsDemo_label_TP = lv_label_create(ui->WidgetsDemo_cont_Skills);
	lv_label_set_text(ui->WidgetsDemo_label_TP, "Team player");
	lv_label_set_long_mode(ui->WidgetsDemo_label_TP, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_TP, 25, 345);
	lv_obj_set_size(ui->WidgetsDemo_label_TP, 196, 34);

	//Write style for WidgetsDemo_label_TP, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_TP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_TP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_TP, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_TP, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_TP, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_TP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_TP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_TP, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_TP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_TP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_TP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_TP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_TP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_TP, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_HW
	ui->WidgetsDemo_label_HW = lv_label_create(ui->WidgetsDemo_cont_Skills);
	lv_label_set_text(ui->WidgetsDemo_label_HW, "Hard-working");
	lv_label_set_long_mode(ui->WidgetsDemo_label_HW, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_HW, 25, 216);
	lv_obj_set_size(ui->WidgetsDemo_label_HW, 196, 34);

	//Write style for WidgetsDemo_label_HW, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_HW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_HW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_HW, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_HW, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_HW, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_HW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_HW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_HW, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_HW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_HW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_HW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_HW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_HW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_HW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Exp
	ui->WidgetsDemo_label_Exp = lv_label_create(ui->WidgetsDemo_cont_Skills);
	lv_label_set_text(ui->WidgetsDemo_label_Exp, "Experience");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Exp, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Exp, 25, 90);
	lv_obj_set_size(ui->WidgetsDemo_label_Exp, 196, 34);

	//Write style for WidgetsDemo_label_Exp, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Exp, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Exp, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Exp, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Exp, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Exp, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cont_Profile
	ui->WidgetsDemo_cont_Profile = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_1);
	lv_obj_set_pos(ui->WidgetsDemo_cont_Profile, 15, 400);
	lv_obj_set_size(ui->WidgetsDemo_cont_Profile, 345, 600);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_Profile, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_Profile, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_Profile, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_Profile, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_Profile, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_Profile, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_Profile, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_Profile, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_Profile, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_Profile, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_ta_UName
	ui->WidgetsDemo_ta_UName = lv_textarea_create(ui->WidgetsDemo_cont_Profile);
	lv_textarea_set_text(ui->WidgetsDemo_ta_UName, "");
	lv_textarea_set_placeholder_text(ui->WidgetsDemo_ta_UName, "Your name");
	lv_textarea_set_password_bullet(ui->WidgetsDemo_ta_UName, "*");
	lv_textarea_set_password_mode(ui->WidgetsDemo_ta_UName, false);
	lv_textarea_set_one_line(ui->WidgetsDemo_ta_UName, true);
	lv_textarea_set_accepted_chars(ui->WidgetsDemo_ta_UName, "");
	lv_textarea_set_max_length(ui->WidgetsDemo_ta_UName, 32);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->WidgetsDemo_ta_UName, ta_event_cb, LV_EVENT_ALL, ui->g_kb_WidgetsDemo);
	#endif
	lv_obj_set_pos(ui->WidgetsDemo_ta_UName, 25, 132);
	lv_obj_set_size(ui->WidgetsDemo_ta_UName, 283, 64);

	//Write style for WidgetsDemo_ta_UName, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->WidgetsDemo_ta_UName, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_ta_UName, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_ta_UName, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_ta_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_ta_UName, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_ta_UName, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_ta_UName, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_ta_UName, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_ta_UName, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_ta_UName, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_ta_UName, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_ta_UName, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_ta_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_ta_UName, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_ta_UName, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_ta_UName, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_ta_UName, 6, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_ta_UName, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_ta_UName, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_ta_UName, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_ta_Password
	ui->WidgetsDemo_ta_Password = lv_textarea_create(ui->WidgetsDemo_cont_Profile);
	lv_textarea_set_text(ui->WidgetsDemo_ta_Password, "");
	lv_textarea_set_placeholder_text(ui->WidgetsDemo_ta_Password, "Min. 8 chars.");
	lv_textarea_set_password_bullet(ui->WidgetsDemo_ta_Password, "*");
	lv_textarea_set_password_mode(ui->WidgetsDemo_ta_Password, true);
	lv_textarea_set_one_line(ui->WidgetsDemo_ta_Password, true);
	lv_textarea_set_accepted_chars(ui->WidgetsDemo_ta_Password, "");
	lv_textarea_set_max_length(ui->WidgetsDemo_ta_Password, 32);
	#if LV_USE_KEYBOARD != 0 || LV_USE_ZH_KEYBOARD != 0
		lv_obj_add_event_cb(ui->WidgetsDemo_ta_Password, ta_event_cb, LV_EVENT_ALL, ui->g_kb_WidgetsDemo);
	#endif
	lv_obj_set_pos(ui->WidgetsDemo_ta_Password, 25, 257);
	lv_obj_set_size(ui->WidgetsDemo_ta_Password, 283, 64);

	//Write style for WidgetsDemo_ta_Password, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->WidgetsDemo_ta_Password, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_ta_Password, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_ta_Password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_ta_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_ta_Password, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_ta_Password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_ta_Password, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_ta_Password, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_ta_Password, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_ta_Password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_ta_Password, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_ta_Password, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_ta_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_ta_Password, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_ta_Password, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_ta_Password, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_ta_Password, 6, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_ta_Password, Part: LV_PART_SCROLLBAR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_ta_Password, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_ta_Password, 0, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_ddlist_Gender
	ui->WidgetsDemo_ddlist_Gender = lv_dropdown_create(ui->WidgetsDemo_cont_Profile);
	lv_dropdown_set_options(ui->WidgetsDemo_ddlist_Gender, "Male\nFemale\nOther");
	lv_obj_set_pos(ui->WidgetsDemo_ddlist_Gender, 25, 508);
	lv_obj_set_size(ui->WidgetsDemo_ddlist_Gender, 283, 61);

	//Write style for WidgetsDemo_ddlist_Gender, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->WidgetsDemo_ddlist_Gender, lv_color_hex(0x0D3055), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_ddlist_Gender, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_ddlist_Gender, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_ddlist_Gender, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_ddlist_Gender, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_ddlist_Gender, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_ddlist_Gender, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_ddlist_Gender, 18, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_ddlist_Gender, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_ddlist_Gender, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_ddlist_Gender, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_ddlist_Gender, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_ddlist_Gender, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_ddlist_Gender, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_ddlist_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_CHECKED for &style_WidgetsDemo_ddlist_Gender_extra_list_selected_checked
	static lv_style_t style_WidgetsDemo_ddlist_Gender_extra_list_selected_checked;
	ui_init_style(&style_WidgetsDemo_ddlist_Gender_extra_list_selected_checked);
	
	lv_style_set_border_width(&style_WidgetsDemo_ddlist_Gender_extra_list_selected_checked, 0);
	lv_style_set_radius(&style_WidgetsDemo_ddlist_Gender_extra_list_selected_checked, 5);
	lv_style_set_bg_opa(&style_WidgetsDemo_ddlist_Gender_extra_list_selected_checked, 255);
	lv_style_set_bg_color(&style_WidgetsDemo_ddlist_Gender_extra_list_selected_checked, lv_color_hex(0x2196F3));
	lv_style_set_bg_grad_dir(&style_WidgetsDemo_ddlist_Gender_extra_list_selected_checked, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->WidgetsDemo_ddlist_Gender), &style_WidgetsDemo_ddlist_Gender_extra_list_selected_checked, LV_PART_SELECTED|LV_STATE_CHECKED);

	//Write style state: LV_STATE_DEFAULT for &style_WidgetsDemo_ddlist_Gender_extra_list_main_default
	static lv_style_t style_WidgetsDemo_ddlist_Gender_extra_list_main_default;
	ui_init_style(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default);
	
	lv_style_set_max_height(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, 200);
	lv_style_set_text_color(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, lv_color_hex(0x000000));
	lv_style_set_text_font(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, &lv_font_montserratMedium_23);
	lv_style_set_text_opa(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, 255);
	lv_style_set_border_width(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, 2);
	lv_style_set_border_opa(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, 255);
	lv_style_set_border_color(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, lv_color_hex(0xe1e6ee));
	lv_style_set_border_side(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, LV_BORDER_SIDE_FULL);
	lv_style_set_radius(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, 5);
	lv_style_set_bg_opa(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, 255);
	lv_style_set_bg_color(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, lv_color_hex(0xffffff));
	lv_style_set_bg_grad_dir(&style_WidgetsDemo_ddlist_Gender_extra_list_main_default, LV_GRAD_DIR_NONE);
	lv_obj_add_style(lv_dropdown_get_list(ui->WidgetsDemo_ddlist_Gender), &style_WidgetsDemo_ddlist_Gender_extra_list_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style state: LV_STATE_DEFAULT for &style_WidgetsDemo_ddlist_Gender_extra_list_scrollbar_default
	static lv_style_t style_WidgetsDemo_ddlist_Gender_extra_list_scrollbar_default;
	ui_init_style(&style_WidgetsDemo_ddlist_Gender_extra_list_scrollbar_default);
	
	lv_style_set_radius(&style_WidgetsDemo_ddlist_Gender_extra_list_scrollbar_default, 5);
	lv_style_set_bg_opa(&style_WidgetsDemo_ddlist_Gender_extra_list_scrollbar_default, 0);
	lv_obj_add_style(lv_dropdown_get_list(ui->WidgetsDemo_ddlist_Gender), &style_WidgetsDemo_ddlist_Gender_extra_list_scrollbar_default, LV_PART_SCROLLBAR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_datetext_Birthday
	ui->WidgetsDemo_datetext_Birthday = lv_label_create(ui->WidgetsDemo_cont_Profile);
	lv_label_set_text(ui->WidgetsDemo_datetext_Birthday, "2023/07/31");
	lv_obj_set_style_text_align(ui->WidgetsDemo_datetext_Birthday, LV_TEXT_ALIGN_CENTER, 0);
	lv_obj_add_flag(ui->WidgetsDemo_datetext_Birthday, LV_OBJ_FLAG_CLICKABLE);
	lv_obj_add_event_cb(ui->WidgetsDemo_datetext_Birthday, WidgetsDemo_datetext_Birthday_event_handler, LV_EVENT_ALL, NULL);
	lv_obj_set_pos(ui->WidgetsDemo_datetext_Birthday, 25, 382);
	lv_obj_set_size(ui->WidgetsDemo_datetext_Birthday, 283, 64);

	//Write style for WidgetsDemo_datetext_Birthday, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->WidgetsDemo_datetext_Birthday, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_datetext_Birthday, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_datetext_Birthday, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_datetext_Birthday, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_datetext_Birthday, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_datetext_Birthday, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_datetext_Birthday, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_datetext_Birthday, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_datetext_Birthday, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_datetext_Birthday, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_datetext_Birthday, lv_color_hex(0xe6e6e6), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_datetext_Birthday, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_datetext_Birthday, 6, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_datetext_Birthday, 19, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_datetext_Birthday, 4, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_datetext_Birthday, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_datetext_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_UName
	ui->WidgetsDemo_label_UName = lv_label_create(ui->WidgetsDemo_cont_Profile);
	lv_label_set_text(ui->WidgetsDemo_label_UName, "User name");
	lv_label_set_long_mode(ui->WidgetsDemo_label_UName, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_UName, 25, 90);
	lv_obj_set_size(ui->WidgetsDemo_label_UName, 196, 34);

	//Write style for WidgetsDemo_label_UName, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_UName, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_UName, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_UName, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_UName, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_UName, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Password
	ui->WidgetsDemo_label_Password = lv_label_create(ui->WidgetsDemo_cont_Profile);
	lv_label_set_text(ui->WidgetsDemo_label_Password, "Password");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Password, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Password, 25, 216);
	lv_obj_set_size(ui->WidgetsDemo_label_Password, 196, 34);

	//Write style for WidgetsDemo_label_Password, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Password, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Password, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Password, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Password, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Password, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Birthday
	ui->WidgetsDemo_label_Birthday = lv_label_create(ui->WidgetsDemo_cont_Profile);
	lv_label_set_text(ui->WidgetsDemo_label_Birthday, "Birthday");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Birthday, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Birthday, 25, 344);
	lv_obj_set_size(ui->WidgetsDemo_label_Birthday, 196, 34);

	//Write style for WidgetsDemo_label_Birthday, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Birthday, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Birthday, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Birthday, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Birthday, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Birthday, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Gender
	ui->WidgetsDemo_label_Gender = lv_label_create(ui->WidgetsDemo_cont_Profile);
	lv_label_set_text(ui->WidgetsDemo_label_Gender, "Gender");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Gender, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Gender, 25, 470);
	lv_obj_set_size(ui->WidgetsDemo_label_Gender, 196, 34);

	//Write style for WidgetsDemo_label_Gender, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Gender, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Gender, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Gender, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Gender, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Gender, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Profile
	ui->WidgetsDemo_label_Profile = lv_label_create(ui->WidgetsDemo_cont_Profile);
	lv_label_set_text(ui->WidgetsDemo_label_Profile, "Your Profile");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Profile, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Profile, 20, 17);
	lv_obj_set_size(ui->WidgetsDemo_label_Profile, 301, 44);

	//Write style for WidgetsDemo_label_Profile, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Profile, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Profile, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Profile, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Profile, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Profile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cont_Card
	ui->WidgetsDemo_cont_Card = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_1);
	lv_obj_set_pos(ui->WidgetsDemo_cont_Card, 15, 10);
	lv_obj_set_size(ui->WidgetsDemo_cont_Card, 730, 350);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_Card, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_Card, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_Card, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_Card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_Card, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_Card, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_Card, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_Card, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_Card, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_Card, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_Card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_Card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_Card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_Card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_Card, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_btn_Logout
	ui->WidgetsDemo_btn_Logout = lv_btn_create(ui->WidgetsDemo_cont_Card);
	ui->WidgetsDemo_btn_Logout_label = lv_label_create(ui->WidgetsDemo_btn_Logout);
	lv_label_set_text(ui->WidgetsDemo_btn_Logout_label, "Log out");
	lv_label_set_long_mode(ui->WidgetsDemo_btn_Logout_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->WidgetsDemo_btn_Logout_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_btn_Logout, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->WidgetsDemo_btn_Logout_label, LV_PCT(100));
	lv_obj_set_pos(ui->WidgetsDemo_btn_Logout, 274, 270);
	lv_obj_set_size(ui->WidgetsDemo_btn_Logout, 203, 61);

	//Write style for WidgetsDemo_btn_Logout, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_Logout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_Logout, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_Logout, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_Logout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_Logout, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_Logout, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_Logout, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_Logout, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_Logout, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_btn_Logout, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_btn_Logout, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_Logout, 255, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_Logout, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_Logout, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_Logout, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_Logout, 8, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_Logout, 0, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_Logout, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_Logout, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_PRESSED);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_Logout, 255, LV_PART_MAIN|LV_STATE_PRESSED);

	//Write codes WidgetsDemo_btn_Invite
	ui->WidgetsDemo_btn_Invite = lv_btn_create(ui->WidgetsDemo_cont_Card);
	ui->WidgetsDemo_btn_Invite_label = lv_label_create(ui->WidgetsDemo_btn_Invite);
	lv_label_set_text(ui->WidgetsDemo_btn_Invite_label, "Invite");
	lv_label_set_long_mode(ui->WidgetsDemo_btn_Invite_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->WidgetsDemo_btn_Invite_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_btn_Invite, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->WidgetsDemo_btn_Invite_label, LV_PCT(100));
	lv_obj_set_pos(ui->WidgetsDemo_btn_Invite, 496, 270);
	lv_obj_set_size(ui->WidgetsDemo_btn_Invite, 203, 61);

	//Write style for WidgetsDemo_btn_Invite, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_Invite, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_Invite, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_Invite, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_Invite, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_Invite, 8, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_Invite, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_Invite, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_Invite, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_Invite, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_btn_Invite, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Dsc
	ui->WidgetsDemo_label_Dsc = lv_label_create(ui->WidgetsDemo_cont_Card);
	lv_label_set_text(ui->WidgetsDemo_label_Dsc, "This is a short description of me.\nTake a look at my Profile!");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Dsc, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Dsc, 273, 88);
	lv_obj_set_size(ui->WidgetsDemo_label_Dsc, 413, 60);

	//Write style for WidgetsDemo_label_Dsc, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Dsc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Dsc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Dsc, lv_color_hex(0xafafaf), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Dsc, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Dsc, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Dsc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Dsc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Dsc, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Dsc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Dsc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Dsc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Dsc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Dsc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Dsc, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Name
	ui->WidgetsDemo_label_Name = lv_label_create(ui->WidgetsDemo_cont_Card);
	lv_label_set_text(ui->WidgetsDemo_label_Name, "Elena Smith");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Name, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Name, 273, 33);
	lv_obj_set_size(ui->WidgetsDemo_label_Name, 250, 45);

	//Write style for WidgetsDemo_label_Name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Name, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Name, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Name, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Email
	ui->WidgetsDemo_label_Email = lv_label_create(ui->WidgetsDemo_cont_Card);
	lv_label_set_text(ui->WidgetsDemo_label_Email, "elena@smith.com");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Email, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Email, 341, 165);
	lv_obj_set_size(ui->WidgetsDemo_label_Email, 310, 44);

	//Write style for WidgetsDemo_label_Email, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Email, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Email, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Email, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Email, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Email, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Email, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Email, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Email, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Email, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Email, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Email, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Email, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Email, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Email, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Tele
	ui->WidgetsDemo_label_Tele = lv_label_create(ui->WidgetsDemo_cont_Card);
	lv_label_set_text(ui->WidgetsDemo_label_Tele, "+79 246 123 4567");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Tele, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Tele, 340, 214);
	lv_obj_set_size(ui->WidgetsDemo_label_Tele, 253, 56);

	//Write style for WidgetsDemo_label_Tele, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Tele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Tele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Tele, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Tele, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Tele, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Tele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Tele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Tele, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Tele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Tele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Tele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Tele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Tele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Tele, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_IconEmail
	ui->WidgetsDemo_label_IconEmail = lv_label_create(ui->WidgetsDemo_cont_Card);
	lv_label_set_text(ui->WidgetsDemo_label_IconEmail, "");
	lv_label_set_long_mode(ui->WidgetsDemo_label_IconEmail, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_IconEmail, 280, 154);
	lv_obj_set_size(ui->WidgetsDemo_label_IconEmail, 135, 50);

	//Write style for WidgetsDemo_label_IconEmail, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_IconEmail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_IconEmail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_IconEmail, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_IconEmail, &lv_font_montserratMedium_39, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_IconEmail, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_IconEmail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_IconEmail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_IconEmail, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_IconEmail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_IconEmail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_IconEmail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_IconEmail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_IconEmail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_IconEmail, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_IconCall
	ui->WidgetsDemo_label_IconCall = lv_label_create(ui->WidgetsDemo_cont_Card);
	lv_label_set_text(ui->WidgetsDemo_label_IconCall, "");
	lv_label_set_long_mode(ui->WidgetsDemo_label_IconCall, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_IconCall, 279, 204);
	lv_obj_set_size(ui->WidgetsDemo_label_IconCall, 135, 50);

	//Write style for WidgetsDemo_label_IconCall, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_IconCall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_IconCall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_IconCall, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_IconCall, &lv_font_montserratMedium_39, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_IconCall, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_IconCall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_IconCall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_IconCall, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_IconCall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_IconCall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_IconCall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_IconCall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_IconCall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_IconCall, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_img_Avatar
	ui->WidgetsDemo_img_Avatar = lv_img_create(ui->WidgetsDemo_cont_Card);
	lv_obj_add_flag(ui->WidgetsDemo_img_Avatar, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->WidgetsDemo_img_Avatar, &_avatar_alpha_239x239);
	lv_img_set_pivot(ui->WidgetsDemo_img_Avatar, 50,50);
	lv_img_set_angle(ui->WidgetsDemo_img_Avatar, 0);
	lv_obj_set_pos(ui->WidgetsDemo_img_Avatar, 16, 58);
	lv_obj_set_size(ui->WidgetsDemo_img_Avatar, 239, 239);

	//Write style for WidgetsDemo_img_Avatar, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->WidgetsDemo_img_Avatar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->WidgetsDemo_img_Avatar, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_img_Avatar, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->WidgetsDemo_img_Avatar, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Analytic
	ui->WidgetsDemo_tabview_Main_tab_2 = lv_tabview_add_tab(ui->WidgetsDemo_tabview_Main,"Analytic");
	lv_obj_t * WidgetsDemo_tabview_Main_tab_2_label = lv_label_create(ui->WidgetsDemo_tabview_Main_tab_2);
	lv_label_set_text(WidgetsDemo_tabview_Main_tab_2_label, "");

	//Write codes WidgetsDemo_cont_Revenue
	ui->WidgetsDemo_cont_Revenue = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_2);
	lv_obj_set_pos(ui->WidgetsDemo_cont_Revenue, 23, 410);
	lv_obj_set_size(ui->WidgetsDemo_cont_Revenue, 730, 363);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_Revenue, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_Revenue, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_Revenue, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_Revenue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_Revenue, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_Revenue, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_Revenue, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_Revenue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_Revenue, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_Revenue, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_chart_MR
	ui->WidgetsDemo_chart_MR = lv_chart_create(ui->WidgetsDemo_cont_Revenue);
	lv_chart_set_type(ui->WidgetsDemo_chart_MR, LV_CHART_TYPE_BAR);
	lv_chart_set_div_line_count(ui->WidgetsDemo_chart_MR, 5, 0);
	lv_chart_set_point_count(ui->WidgetsDemo_chart_MR, 12);
	lv_chart_set_range(ui->WidgetsDemo_chart_MR, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
	lv_chart_set_axis_tick(ui->WidgetsDemo_chart_MR, LV_CHART_AXIS_PRIMARY_Y, 10, 5, 5, 4, true, 80);
	lv_chart_set_range(ui->WidgetsDemo_chart_MR, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
	lv_chart_set_axis_tick(ui->WidgetsDemo_chart_MR, LV_CHART_AXIS_PRIMARY_X, 1, 1, 12, 1, true, 80);
	lv_chart_set_zoom_x(ui->WidgetsDemo_chart_MR, 512);
	lv_chart_set_zoom_y(ui->WidgetsDemo_chart_MR, 256);
	ui->WidgetsDemo_chart_MR_0 = lv_chart_add_series(ui->WidgetsDemo_chart_MR, lv_color_hex(0xb0b0b0), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 25);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 51);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 22);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 77);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 15);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 24);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 17);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 32);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 54);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 33);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 75);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_0, 21);
#endif
	ui->WidgetsDemo_chart_MR_1 = lv_chart_add_series(ui->WidgetsDemo_chart_MR, lv_color_hex(0x2196F3), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 72);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 41);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 71);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 79);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 48);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 31);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 16);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 43);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 74);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 59);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 31);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MR, ui->WidgetsDemo_chart_MR_1, 33);
#endif
	lv_obj_set_pos(ui->WidgetsDemo_chart_MR, 66, 81);
	lv_obj_set_size(ui->WidgetsDemo_chart_MR, 613, 236);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_chart_MR, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_chart_MR, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_chart_MR, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_chart_MR, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_chart_MR, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_chart_MR, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_chart_MR, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_chart_MR, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_chart_MR, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_chart_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->WidgetsDemo_chart_MR, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->WidgetsDemo_chart_MR, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->WidgetsDemo_chart_MR, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_chart_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_chart_MR, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->WidgetsDemo_chart_MR, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_chart_MR, &lv_font_montserratMedium_25, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_chart_MR, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->WidgetsDemo_chart_MR, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->WidgetsDemo_chart_MR, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->WidgetsDemo_chart_MR, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_MR
	ui->WidgetsDemo_label_MR = lv_label_create(ui->WidgetsDemo_cont_Revenue);
	lv_label_set_text(ui->WidgetsDemo_label_MR, "Monthly Revenue");
	lv_label_set_long_mode(ui->WidgetsDemo_label_MR, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_MR, 33, 26);
	lv_obj_set_size(ui->WidgetsDemo_label_MR, 323, 56);

	//Write style for WidgetsDemo_label_MR, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_MR, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_MR, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_MR, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_MR, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_MR, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cont_Sessions
	ui->WidgetsDemo_cont_Sessions = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_2);
	lv_obj_set_pos(ui->WidgetsDemo_cont_Sessions, 22, 1252);
	lv_obj_set_size(ui->WidgetsDemo_cont_Sessions, 730, 405);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_Sessions, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_Sessions, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_Sessions, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_Sessions, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_Sessions, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_Sessions, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_Sessions, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_Sessions, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_Sessions, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_Sessions, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Sessions
	ui->WidgetsDemo_label_Sessions = lv_label_create(ui->WidgetsDemo_cont_Sessions);
	lv_label_set_text(ui->WidgetsDemo_label_Sessions, "Sessions\n");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Sessions, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Sessions, 33, 26);
	lv_obj_set_size(ui->WidgetsDemo_label_Sessions, 323, 56);

	//Write style for WidgetsDemo_label_Sessions, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Sessions, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Sessions, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Sessions, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Sessions, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Desktop
	ui->WidgetsDemo_label_Desktop = lv_label_create(ui->WidgetsDemo_cont_Sessions);
	lv_label_set_text(ui->WidgetsDemo_label_Desktop, "Desktop: 1000");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Desktop, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Desktop, 466, 151);
	lv_obj_set_size(ui->WidgetsDemo_label_Desktop, 238, 36);

	//Write style for WidgetsDemo_label_Desktop, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Desktop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Desktop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Desktop, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Desktop, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Desktop, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Desktop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Desktop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Desktop, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Desktop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Desktop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Desktop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Desktop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Desktop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Desktop, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Mobile
	ui->WidgetsDemo_label_Mobile = lv_label_create(ui->WidgetsDemo_cont_Sessions);
	lv_label_set_text(ui->WidgetsDemo_label_Mobile, "Mobile: 1000");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Mobile, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Mobile, 466, 273);
	lv_obj_set_size(ui->WidgetsDemo_label_Mobile, 206, 36);

	//Write style for WidgetsDemo_label_Mobile, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Mobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Mobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Mobile, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Mobile, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Mobile, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Mobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Mobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Mobile, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Mobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Mobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Mobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Mobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Mobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Mobile, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Tablet
	ui->WidgetsDemo_label_Tablet = lv_label_create(ui->WidgetsDemo_cont_Sessions);
	lv_label_set_text(ui->WidgetsDemo_label_Tablet, "Tablet: 1000");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Tablet, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Tablet, 466, 213);
	lv_obj_set_size(ui->WidgetsDemo_label_Tablet, 238, 36);

	//Write style for WidgetsDemo_label_Tablet, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Tablet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Tablet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Tablet, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Tablet, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Tablet, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Tablet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Tablet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Tablet, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Tablet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Tablet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Tablet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Tablet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Tablet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Tablet, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_meter_Sessions
	ui->WidgetsDemo_meter_Sessions = lv_meter_create(ui->WidgetsDemo_cont_Sessions);
	// add scale ui->WidgetsDemo_meter_Sessions_scale_0
	ui->WidgetsDemo_meter_Sessions_scale_0 = lv_meter_add_scale(ui->WidgetsDemo_meter_Sessions);
	lv_meter_set_scale_ticks(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0, 0, 0, 0, lv_color_hex(0xffffff));
	lv_meter_set_scale_range(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0, 0, 100, 360, 90);

	// add arc for ui->WidgetsDemo_meter_Sessions_scale_0
	ui->WidgetsDemo_meter_Sessions_scale_0_arc_0 = lv_meter_add_arc(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0, 25, lv_color_hex(0xf44336), -15);
	lv_meter_set_indicator_start_value(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0_arc_0, 0);
	lv_meter_set_indicator_end_value(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0_arc_0, 39);

	// add arc for ui->WidgetsDemo_meter_Sessions_scale_0
	ui->WidgetsDemo_meter_Sessions_scale_0_arc_1 = lv_meter_add_arc(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0, 40, lv_color_hex(0x2196F3), 0);
	lv_meter_set_indicator_start_value(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0_arc_1, 40);
	lv_meter_set_indicator_end_value(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0_arc_1, 69);

	// add arc for ui->WidgetsDemo_meter_Sessions_scale_0
	ui->WidgetsDemo_meter_Sessions_scale_0_arc_2 = lv_meter_add_arc(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0, 15, lv_color_hex(0x4caf50), -25);
	lv_meter_set_indicator_start_value(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0_arc_2, 70);
	lv_meter_set_indicator_end_value(ui->WidgetsDemo_meter_Sessions, ui->WidgetsDemo_meter_Sessions_scale_0_arc_2, 99);
	lv_obj_set_pos(ui->WidgetsDemo_meter_Sessions, 51, 74);
	lv_obj_set_size(ui->WidgetsDemo_meter_Sessions, 281, 281);

	//Write style for WidgetsDemo_meter_Sessions, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_meter_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_meter_Sessions, 177, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_meter_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_meter_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_meter_Sessions, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->WidgetsDemo_meter_Sessions, lv_color_hex(0xff0000), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_meter_Sessions, &lv_font_montserratMedium_19, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_meter_Sessions, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_meter_Sessions, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_meter_Sessions, 0, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_RedCircle_Sessions
	ui->WidgetsDemo_RedCircle_Sessions = lv_label_create(ui->WidgetsDemo_cont_Sessions);
	lv_label_set_text(ui->WidgetsDemo_RedCircle_Sessions, "");
	lv_label_set_long_mode(ui->WidgetsDemo_RedCircle_Sessions, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_RedCircle_Sessions, 416, 150);
	lv_obj_set_size(ui->WidgetsDemo_RedCircle_Sessions, 26, 26);

	//Write style for WidgetsDemo_RedCircle_Sessions, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_RedCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_RedCircle_Sessions, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_RedCircle_Sessions, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_RedCircle_Sessions, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_RedCircle_Sessions, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_RedCircle_Sessions, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_RedCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_RedCircle_Sessions, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_RedCircle_Sessions, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_RedCircle_Sessions, lv_color_hex(0xf44336), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_RedCircle_Sessions, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_RedCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_RedCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_RedCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_RedCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_RedCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_GreenCircle_Sessions
	ui->WidgetsDemo_GreenCircle_Sessions = lv_label_create(ui->WidgetsDemo_cont_Sessions);
	lv_label_set_text(ui->WidgetsDemo_GreenCircle_Sessions, "");
	lv_label_set_long_mode(ui->WidgetsDemo_GreenCircle_Sessions, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_GreenCircle_Sessions, 416, 271);
	lv_obj_set_size(ui->WidgetsDemo_GreenCircle_Sessions, 26, 26);

	//Write style for WidgetsDemo_GreenCircle_Sessions, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_GreenCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_GreenCircle_Sessions, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_GreenCircle_Sessions, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_GreenCircle_Sessions, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_GreenCircle_Sessions, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_GreenCircle_Sessions, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_GreenCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_GreenCircle_Sessions, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_GreenCircle_Sessions, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_GreenCircle_Sessions, lv_color_hex(0x4caf50), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_GreenCircle_Sessions, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_GreenCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_GreenCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_GreenCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_GreenCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_GreenCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_BlueCircle_Sessions
	ui->WidgetsDemo_BlueCircle_Sessions = lv_label_create(ui->WidgetsDemo_cont_Sessions);
	lv_label_set_text(ui->WidgetsDemo_BlueCircle_Sessions, "");
	lv_label_set_long_mode(ui->WidgetsDemo_BlueCircle_Sessions, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_BlueCircle_Sessions, 416, 211);
	lv_obj_set_size(ui->WidgetsDemo_BlueCircle_Sessions, 26, 26);

	//Write style for WidgetsDemo_BlueCircle_Sessions, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_BlueCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_BlueCircle_Sessions, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_BlueCircle_Sessions, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_BlueCircle_Sessions, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_BlueCircle_Sessions, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_BlueCircle_Sessions, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_BlueCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_BlueCircle_Sessions, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_BlueCircle_Sessions, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_BlueCircle_Sessions, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_BlueCircle_Sessions, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_BlueCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_BlueCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_BlueCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_BlueCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_BlueCircle_Sessions, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cont_NS
	ui->WidgetsDemo_cont_NS = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_2);
	lv_obj_set_pos(ui->WidgetsDemo_cont_NS, 23, 1694);
	lv_obj_set_size(ui->WidgetsDemo_cont_NS, 730, 405);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_NS, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_NS, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_NS, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_NS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_NS, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_NS, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_NS, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_NS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_NS, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_NS, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_NS
	ui->WidgetsDemo_label_NS = lv_label_create(ui->WidgetsDemo_cont_NS);
	lv_label_set_text(ui->WidgetsDemo_label_NS, "Network Speed");
	lv_label_set_long_mode(ui->WidgetsDemo_label_NS, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_NS, 33, 26);
	lv_obj_set_size(ui->WidgetsDemo_label_NS, 323, 56);

	//Write style for WidgetsDemo_label_NS, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_NS, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_NS, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_NS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_NS, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_NS_Red
	ui->WidgetsDemo_label_NS_Red = lv_label_create(ui->WidgetsDemo_cont_NS);
	lv_label_set_text(ui->WidgetsDemo_label_NS_Red, "Low Speed");
	lv_label_set_long_mode(ui->WidgetsDemo_label_NS_Red, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_NS_Red, 466, 151);
	lv_obj_set_size(ui->WidgetsDemo_label_NS_Red, 238, 36);

	//Write style for WidgetsDemo_label_NS_Red, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_NS_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_NS_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_NS_Red, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_NS_Red, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_NS_Red, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_NS_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_NS_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_NS_Red, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_NS_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_NS_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_NS_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_NS_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_NS_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_NS_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_NS_Green
	ui->WidgetsDemo_label_NS_Green = lv_label_create(ui->WidgetsDemo_cont_NS);
	lv_label_set_text(ui->WidgetsDemo_label_NS_Green, "High Speed");
	lv_label_set_long_mode(ui->WidgetsDemo_label_NS_Green, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_NS_Green, 466, 273);
	lv_obj_set_size(ui->WidgetsDemo_label_NS_Green, 166, 36);

	//Write style for WidgetsDemo_label_NS_Green, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_NS_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_NS_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_NS_Green, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_NS_Green, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_NS_Green, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_NS_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_NS_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_NS_Green, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_NS_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_NS_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_NS_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_NS_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_NS_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_NS_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_NS_Blue
	ui->WidgetsDemo_label_NS_Blue = lv_label_create(ui->WidgetsDemo_cont_NS);
	lv_label_set_text(ui->WidgetsDemo_label_NS_Blue, "Normal Speed");
	lv_label_set_long_mode(ui->WidgetsDemo_label_NS_Blue, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_NS_Blue, 466, 213);
	lv_obj_set_size(ui->WidgetsDemo_label_NS_Blue, 238, 36);

	//Write style for WidgetsDemo_label_NS_Blue, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_NS_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_NS_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_NS_Blue, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_NS_Blue, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_NS_Blue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_NS_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_NS_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_NS_Blue, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_NS_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_NS_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_NS_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_NS_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_NS_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_NS_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_meter_NS
	ui->WidgetsDemo_meter_NS = lv_meter_create(ui->WidgetsDemo_cont_NS);
	// add scale ui->WidgetsDemo_meter_NS_scale_0
	ui->WidgetsDemo_meter_NS_scale_0 = lv_meter_add_scale(ui->WidgetsDemo_meter_NS);
	lv_meter_set_scale_ticks(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0, 21, 4, 30, lv_color_hex(0xffffff));
	lv_meter_set_scale_major_ticks(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0, 4, 6, 45, lv_color_hex(0xffffff), 15);
	lv_meter_set_scale_range(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0, 10, 60, 220, 140);

	// add arc for ui->WidgetsDemo_meter_NS_scale_0
	ui->WidgetsDemo_meter_NS_scale_0_arc_0 = lv_meter_add_arc(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0, 20, lv_color_hex(0xf44336), 0);
	lv_meter_set_indicator_start_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_arc_0, 10);
	lv_meter_set_indicator_end_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_arc_0, 20);

	// add arc for ui->WidgetsDemo_meter_NS_scale_0
	ui->WidgetsDemo_meter_NS_scale_0_arc_1 = lv_meter_add_arc(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0, 20, lv_color_hex(0x2196F3), 0);
	lv_meter_set_indicator_start_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_arc_1, 20);
	lv_meter_set_indicator_end_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_arc_1, 40);

	// add arc for ui->WidgetsDemo_meter_NS_scale_0
	ui->WidgetsDemo_meter_NS_scale_0_arc_2 = lv_meter_add_arc(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0, 20, lv_color_hex(0x4caf50), 0);
	lv_meter_set_indicator_start_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_arc_2, 40);
	lv_meter_set_indicator_end_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_arc_2, 60);

	// add scale line for ui->WidgetsDemo_meter_NS_scale_0
	ui->WidgetsDemo_meter_NS_scale_0_scaleline_0 = lv_meter_add_scale_lines(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0, lv_color_hex(0xa20707), lv_color_hex(0xa20707), false, 0);
	lv_meter_set_indicator_start_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_scaleline_0, 10);
	lv_meter_set_indicator_end_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_scaleline_0, 19);

	// add scale line for ui->WidgetsDemo_meter_NS_scale_0
	ui->WidgetsDemo_meter_NS_scale_0_scaleline_1 = lv_meter_add_scale_lines(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0, lv_color_hex(0x2f7ebf), lv_color_hex(0x2f7ebf), false, 0);
	lv_meter_set_indicator_start_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_scaleline_1, 20);
	lv_meter_set_indicator_end_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_scaleline_1, 39);

	// add scale line for ui->WidgetsDemo_meter_NS_scale_0
	ui->WidgetsDemo_meter_NS_scale_0_scaleline_2 = lv_meter_add_scale_lines(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0, lv_color_hex(0x006d2a), lv_color_hex(0x006d2a), true, 0);
	lv_meter_set_indicator_start_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_scaleline_2, 40);
	lv_meter_set_indicator_end_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_scaleline_2, 60);

	// add needle line for ui->WidgetsDemo_meter_NS_scale_0.
	ui->WidgetsDemo_meter_NS_scale_0_ndline_0 = lv_meter_add_needle_line(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0, 8, lv_color_hex(0x000000), -40);
	lv_meter_set_indicator_value(ui->WidgetsDemo_meter_NS, ui->WidgetsDemo_meter_NS_scale_0_ndline_0, 10);
	lv_obj_set_pos(ui->WidgetsDemo_meter_NS, 20, 60);
	lv_obj_set_size(ui->WidgetsDemo_meter_NS, 334, 334);

	//Write style for WidgetsDemo_meter_NS, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_meter_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_meter_NS, 177, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_meter_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_meter_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_meter_NS, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->WidgetsDemo_meter_NS, lv_color_hex(0x909090), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_meter_NS, &lv_font_montserratMedium_19, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_meter_NS, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_meter_NS, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_meter_NS, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_meter_NS, lv_color_hex(0x000000), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_meter_NS, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_GreenCircle_NS
	ui->WidgetsDemo_GreenCircle_NS = lv_label_create(ui->WidgetsDemo_cont_NS);
	lv_label_set_text(ui->WidgetsDemo_GreenCircle_NS, "");
	lv_label_set_long_mode(ui->WidgetsDemo_GreenCircle_NS, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_GreenCircle_NS, 416, 271);
	lv_obj_set_size(ui->WidgetsDemo_GreenCircle_NS, 26, 26);

	//Write style for WidgetsDemo_GreenCircle_NS, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_GreenCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_GreenCircle_NS, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_GreenCircle_NS, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_GreenCircle_NS, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_GreenCircle_NS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_GreenCircle_NS, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_GreenCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_GreenCircle_NS, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_GreenCircle_NS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_GreenCircle_NS, lv_color_hex(0x4caf50), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_GreenCircle_NS, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_GreenCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_GreenCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_GreenCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_GreenCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_GreenCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_BlueCircle_NS
	ui->WidgetsDemo_BlueCircle_NS = lv_label_create(ui->WidgetsDemo_cont_NS);
	lv_label_set_text(ui->WidgetsDemo_BlueCircle_NS, "");
	lv_label_set_long_mode(ui->WidgetsDemo_BlueCircle_NS, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_BlueCircle_NS, 416, 211);
	lv_obj_set_size(ui->WidgetsDemo_BlueCircle_NS, 26, 26);

	//Write style for WidgetsDemo_BlueCircle_NS, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_BlueCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_BlueCircle_NS, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_BlueCircle_NS, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_BlueCircle_NS, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_BlueCircle_NS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_BlueCircle_NS, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_BlueCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_BlueCircle_NS, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_BlueCircle_NS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_BlueCircle_NS, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_BlueCircle_NS, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_BlueCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_BlueCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_BlueCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_BlueCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_BlueCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_RedCircle_NS
	ui->WidgetsDemo_RedCircle_NS = lv_label_create(ui->WidgetsDemo_cont_NS);
	lv_label_set_text(ui->WidgetsDemo_RedCircle_NS, "");
	lv_label_set_long_mode(ui->WidgetsDemo_RedCircle_NS, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_RedCircle_NS, 416, 150);
	lv_obj_set_size(ui->WidgetsDemo_RedCircle_NS, 26, 26);

	//Write style for WidgetsDemo_RedCircle_NS, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_RedCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_RedCircle_NS, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_RedCircle_NS, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_RedCircle_NS, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_RedCircle_NS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_RedCircle_NS, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_RedCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_RedCircle_NS, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_RedCircle_NS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_RedCircle_NS, lv_color_hex(0xf44336), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_RedCircle_NS, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_RedCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_RedCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_RedCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_RedCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_RedCircle_NS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_NS_Num
	ui->WidgetsDemo_label_NS_Num = lv_label_create(ui->WidgetsDemo_cont_NS);
	lv_label_set_text(ui->WidgetsDemo_label_NS_Num, "10");
	lv_label_set_long_mode(ui->WidgetsDemo_label_NS_Num, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_NS_Num, 165, 276);
	lv_obj_set_size(ui->WidgetsDemo_label_NS_Num, 60, 52);

	//Write style for WidgetsDemo_label_NS_Num, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_NS_Num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_NS_Num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_NS_Num, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_NS_Num, &lv_font_montserratMedium_39, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_NS_Num, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_NS_Num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_NS_Num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_NS_Num, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_NS_Num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_NS_Num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_NS_Num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_NS_Num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_NS_Num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_NS_Num, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_NS_Mbps
	ui->WidgetsDemo_label_NS_Mbps = lv_label_create(ui->WidgetsDemo_cont_NS);
	lv_label_set_text(ui->WidgetsDemo_label_NS_Mbps, "Mbps");
	lv_label_set_long_mode(ui->WidgetsDemo_label_NS_Mbps, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_NS_Mbps, 228, 288);
	lv_obj_set_size(ui->WidgetsDemo_label_NS_Mbps, 166, 56);

	//Write style for WidgetsDemo_label_NS_Mbps, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_NS_Mbps, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_NS_Mbps, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_NS_Mbps, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_NS_Mbps, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_NS_Mbps, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_NS_Mbps, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_NS_Mbps, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_NS_Mbps, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_NS_Mbps, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_NS_Mbps, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_NS_Mbps, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_NS_Mbps, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_NS_Mbps, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_NS_Mbps, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cont_UV
	ui->WidgetsDemo_cont_UV = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_2);
	lv_obj_set_pos(ui->WidgetsDemo_cont_UV, 21, 10);
	lv_obj_set_size(ui->WidgetsDemo_cont_UV, 730, 363);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_UV, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_UV, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_UV, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_UV, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_UV, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_UV, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_UV, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_UV, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_UV, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_UV, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_chart_UV
	ui->WidgetsDemo_chart_UV = lv_chart_create(ui->WidgetsDemo_cont_UV);
	lv_chart_set_type(ui->WidgetsDemo_chart_UV, LV_CHART_TYPE_LINE);
	lv_chart_set_div_line_count(ui->WidgetsDemo_chart_UV, 0, 12);
	lv_chart_set_point_count(ui->WidgetsDemo_chart_UV, 12);
	lv_chart_set_range(ui->WidgetsDemo_chart_UV, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
	lv_chart_set_axis_tick(ui->WidgetsDemo_chart_UV, LV_CHART_AXIS_PRIMARY_Y, 1, 1, 5, 4, true, 80);
	lv_chart_set_range(ui->WidgetsDemo_chart_UV, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
	lv_chart_set_axis_tick(ui->WidgetsDemo_chart_UV, LV_CHART_AXIS_PRIMARY_X, 1, 1, 12, 1, true, 80);
	lv_chart_set_zoom_x(ui->WidgetsDemo_chart_UV, 512);
	lv_chart_set_zoom_y(ui->WidgetsDemo_chart_UV, 256);
	ui->WidgetsDemo_chart_UV_0 = lv_chart_add_series(ui->WidgetsDemo_chart_UV, lv_color_hex(0x2196F3), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 69);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 63);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 68);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 79);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 70);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 27);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 73);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 65);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 20);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 21);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 49);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_UV, ui->WidgetsDemo_chart_UV_0, 62);
#endif
	lv_obj_set_pos(ui->WidgetsDemo_chart_UV, 55, 93);
	lv_obj_set_size(ui->WidgetsDemo_chart_UV, 626, 212);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_chart_UV, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_chart_UV, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_chart_UV, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_chart_UV, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_chart_UV, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_chart_UV, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_chart_UV, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_chart_UV, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_chart_UV, LV_BORDER_SIDE_LEFT | LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_chart_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->WidgetsDemo_chart_UV, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->WidgetsDemo_chart_UV, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->WidgetsDemo_chart_UV, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_chart_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_chart_UV, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->WidgetsDemo_chart_UV, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_chart_UV, &lv_font_montserratMedium_25, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_chart_UV, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->WidgetsDemo_chart_UV, 0, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_UV
	ui->WidgetsDemo_label_UV = lv_label_create(ui->WidgetsDemo_cont_UV);
	lv_label_set_text(ui->WidgetsDemo_label_UV, "Unique Visitors");
	lv_label_set_long_mode(ui->WidgetsDemo_label_UV, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_UV, 33, 26);
	lv_obj_set_size(ui->WidgetsDemo_label_UV, 311, 44);

	//Write style for WidgetsDemo_label_UV, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_UV, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_UV, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_UV, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_UV, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_UV, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cont_MT
	ui->WidgetsDemo_cont_MT = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_2);
	lv_obj_set_pos(ui->WidgetsDemo_cont_MT, 23, 810);
	lv_obj_set_size(ui->WidgetsDemo_cont_MT, 730, 405);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_MT, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_MT, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_MT, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_MT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_MT, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_MT, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_MT, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_MT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_MT, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_MT, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_MT
	ui->WidgetsDemo_label_MT = lv_label_create(ui->WidgetsDemo_cont_MT);
	lv_label_set_text(ui->WidgetsDemo_label_MT, "Monthly Target");
	lv_label_set_long_mode(ui->WidgetsDemo_label_MT, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_MT, 33, 26);
	lv_obj_set_size(ui->WidgetsDemo_label_MT, 323, 56);

	//Write style for WidgetsDemo_label_MT, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_MT, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_MT, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_MT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_MT, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_arc_Blue
	ui->WidgetsDemo_arc_Blue = lv_arc_create(ui->WidgetsDemo_cont_MT);
	lv_arc_set_mode(ui->WidgetsDemo_arc_Blue, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->WidgetsDemo_arc_Blue, 0, 100);
	lv_arc_set_bg_angles(ui->WidgetsDemo_arc_Blue, 0, 270);
	lv_arc_set_value(ui->WidgetsDemo_arc_Blue, 45);
	lv_arc_set_rotation(ui->WidgetsDemo_arc_Blue, 90);
	lv_obj_set_style_arc_rounded(ui->WidgetsDemo_arc_Blue, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->WidgetsDemo_arc_Blue, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->WidgetsDemo_arc_Blue, 51, 75);
	lv_obj_set_size(ui->WidgetsDemo_arc_Blue, 281, 281);

	//Write style for WidgetsDemo_arc_Blue, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_arc_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_arc_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->WidgetsDemo_arc_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_arc_Blue, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_arc_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_arc_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_arc_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_arc_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_arc_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_arc_Blue, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->WidgetsDemo_arc_Blue, 20, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->WidgetsDemo_arc_Blue, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->WidgetsDemo_arc_Blue, lv_color_hex(0x2196F3), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_arc_Blue, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_arc_Blue, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_arc_Blue, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_arc_Red
	ui->WidgetsDemo_arc_Red = lv_arc_create(ui->WidgetsDemo_cont_MT);
	lv_arc_set_mode(ui->WidgetsDemo_arc_Red, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->WidgetsDemo_arc_Red, 0, 100);
	lv_arc_set_bg_angles(ui->WidgetsDemo_arc_Red, 0, 270);
	lv_arc_set_value(ui->WidgetsDemo_arc_Red, 60);
	lv_arc_set_rotation(ui->WidgetsDemo_arc_Red, 90);
	lv_obj_set_style_arc_rounded(ui->WidgetsDemo_arc_Red, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->WidgetsDemo_arc_Red, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->WidgetsDemo_arc_Red, 80, 105);
	lv_obj_set_size(ui->WidgetsDemo_arc_Red, 223, 223);

	//Write style for WidgetsDemo_arc_Red, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_arc_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_arc_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->WidgetsDemo_arc_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_arc_Red, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_arc_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_arc_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_arc_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_arc_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_arc_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_arc_Red, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->WidgetsDemo_arc_Red, 20, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->WidgetsDemo_arc_Red, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->WidgetsDemo_arc_Red, lv_color_hex(0xf44336), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_arc_Red, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_arc_Red, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_arc_Red, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_arc_Green
	ui->WidgetsDemo_arc_Green = lv_arc_create(ui->WidgetsDemo_cont_MT);
	lv_arc_set_mode(ui->WidgetsDemo_arc_Green, LV_ARC_MODE_NORMAL);
	lv_arc_set_range(ui->WidgetsDemo_arc_Green, 0, 100);
	lv_arc_set_bg_angles(ui->WidgetsDemo_arc_Green, 0, 270);
	lv_arc_set_value(ui->WidgetsDemo_arc_Green, 30);
	lv_arc_set_rotation(ui->WidgetsDemo_arc_Green, 90);
	lv_obj_set_style_arc_rounded(ui->WidgetsDemo_arc_Green, 0,  LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_rounded(ui->WidgetsDemo_arc_Green, 0, LV_STATE_DEFAULT);
	lv_obj_set_pos(ui->WidgetsDemo_arc_Green, 110, 135);
	lv_obj_set_size(ui->WidgetsDemo_arc_Green, 165, 165);

	//Write style for WidgetsDemo_arc_Green, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_arc_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_arc_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->WidgetsDemo_arc_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_arc_Green, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_arc_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_arc_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_arc_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_arc_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_arc_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_arc_Green, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_arc_width(ui->WidgetsDemo_arc_Green, 20, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_opa(ui->WidgetsDemo_arc_Green, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_arc_color(ui->WidgetsDemo_arc_Green, lv_color_hex(0x4caf50), LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_arc_Green, Part: LV_PART_KNOB, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_arc_Green, 0, LV_PART_KNOB|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_arc_Green, 0, LV_PART_KNOB|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Revenue
	ui->WidgetsDemo_label_Revenue = lv_label_create(ui->WidgetsDemo_cont_MT);
	lv_label_set_text(ui->WidgetsDemo_label_Revenue, "Revenue: 63%");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Revenue, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Revenue, 466, 151);
	lv_obj_set_size(ui->WidgetsDemo_label_Revenue, 238, 36);

	//Write style for WidgetsDemo_label_Revenue, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Revenue, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Revenue, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Revenue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Revenue, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Revenue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Costs
	ui->WidgetsDemo_label_Costs = lv_label_create(ui->WidgetsDemo_cont_MT);
	lv_label_set_text(ui->WidgetsDemo_label_Costs, "Costs: 58%");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Costs, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Costs, 466, 273);
	lv_obj_set_size(ui->WidgetsDemo_label_Costs, 166, 36);

	//Write style for WidgetsDemo_label_Costs, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Costs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Costs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Costs, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Costs, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Costs, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Costs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Costs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Costs, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Costs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Costs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Costs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Costs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Costs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Costs, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Sales
	ui->WidgetsDemo_label_Sales = lv_label_create(ui->WidgetsDemo_cont_MT);
	lv_label_set_text(ui->WidgetsDemo_label_Sales, "Sales: 44%");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Sales, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Sales, 466, 213);
	lv_obj_set_size(ui->WidgetsDemo_label_Sales, 166, 33);

	//Write style for WidgetsDemo_label_Sales, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Sales, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Sales, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Sales, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Sales, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Sales, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Sales, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Sales, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Sales, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Sales, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Sales, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Sales, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Sales, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Sales, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Sales, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_GreenCircle_MT
	ui->WidgetsDemo_GreenCircle_MT = lv_label_create(ui->WidgetsDemo_cont_MT);
	lv_label_set_text(ui->WidgetsDemo_GreenCircle_MT, "");
	lv_label_set_long_mode(ui->WidgetsDemo_GreenCircle_MT, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_GreenCircle_MT, 416, 271);
	lv_obj_set_size(ui->WidgetsDemo_GreenCircle_MT, 26, 26);

	//Write style for WidgetsDemo_GreenCircle_MT, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_GreenCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_GreenCircle_MT, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_GreenCircle_MT, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_GreenCircle_MT, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_GreenCircle_MT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_GreenCircle_MT, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_GreenCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_GreenCircle_MT, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_GreenCircle_MT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_GreenCircle_MT, lv_color_hex(0x4caf50), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_GreenCircle_MT, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_GreenCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_GreenCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_GreenCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_GreenCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_GreenCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_BlueCircle_MT
	ui->WidgetsDemo_BlueCircle_MT = lv_label_create(ui->WidgetsDemo_cont_MT);
	lv_label_set_text(ui->WidgetsDemo_BlueCircle_MT, "");
	lv_label_set_long_mode(ui->WidgetsDemo_BlueCircle_MT, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_BlueCircle_MT, 416, 211);
	lv_obj_set_size(ui->WidgetsDemo_BlueCircle_MT, 26, 26);

	//Write style for WidgetsDemo_BlueCircle_MT, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_BlueCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_BlueCircle_MT, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_BlueCircle_MT, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_BlueCircle_MT, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_BlueCircle_MT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_BlueCircle_MT, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_BlueCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_BlueCircle_MT, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_BlueCircle_MT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_BlueCircle_MT, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_BlueCircle_MT, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_BlueCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_BlueCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_BlueCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_BlueCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_BlueCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_RedCircle_MT
	ui->WidgetsDemo_RedCircle_MT = lv_label_create(ui->WidgetsDemo_cont_MT);
	lv_label_set_text(ui->WidgetsDemo_RedCircle_MT, "");
	lv_label_set_long_mode(ui->WidgetsDemo_RedCircle_MT, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_RedCircle_MT, 416, 150);
	lv_obj_set_size(ui->WidgetsDemo_RedCircle_MT, 26, 26);

	//Write style for WidgetsDemo_RedCircle_MT, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_RedCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_RedCircle_MT, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_RedCircle_MT, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_RedCircle_MT, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_RedCircle_MT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_RedCircle_MT, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_RedCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_RedCircle_MT, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_RedCircle_MT, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_RedCircle_MT, lv_color_hex(0xf44336), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_RedCircle_MT, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_RedCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_RedCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_RedCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_RedCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_RedCircle_MT, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes Shop
	ui->WidgetsDemo_tabview_Main_tab_3 = lv_tabview_add_tab(ui->WidgetsDemo_tabview_Main,"Shop");
	lv_obj_t * WidgetsDemo_tabview_Main_tab_3_label = lv_label_create(ui->WidgetsDemo_tabview_Main_tab_3);
	lv_label_set_text(WidgetsDemo_tabview_Main_tab_3_label, "");

	//Write codes WidgetsDemo_cont_Notification
	ui->WidgetsDemo_cont_Notification = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_3);
	lv_obj_set_pos(ui->WidgetsDemo_cont_Notification, 400, 505);
	lv_obj_set_size(ui->WidgetsDemo_cont_Notification, 350, 326);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_Notification, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_Notification, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_Notification, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_Notification, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_Notification, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_Notification, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_Notification, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_Notification, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_Notification, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_Notification, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_Notification, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cb_ItemPur
	ui->WidgetsDemo_cb_ItemPur = lv_checkbox_create(ui->WidgetsDemo_cont_Notification);
	lv_checkbox_set_text(ui->WidgetsDemo_cb_ItemPur, "Item purchased");
	lv_obj_set_pos(ui->WidgetsDemo_cb_ItemPur, 20, 84);

	//Write style for WidgetsDemo_cb_ItemPur, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cb_ItemPur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cb_ItemPur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cb_ItemPur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cb_ItemPur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_cb_ItemPur, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_cb_ItemPur, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_cb_ItemPur, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_cb_ItemPur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_ItemPur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_ItemPur, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_ItemPur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cb_ItemPur, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_cb_ItemPur, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_all(ui->WidgetsDemo_cb_ItemPur, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_ItemPur, 2, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cb_ItemPur, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cb_ItemPur, lv_color_hex(0x2196F3), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cb_ItemPur, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_ItemPur, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_ItemPur, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cb_ItemPur, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cb_ItemPur, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cb_NewCon
	ui->WidgetsDemo_cb_NewCon = lv_checkbox_create(ui->WidgetsDemo_cont_Notification);
	lv_checkbox_set_text(ui->WidgetsDemo_cb_NewCon, "New connection");
	lv_obj_set_pos(ui->WidgetsDemo_cb_NewCon, 20, 148);

	//Write style for WidgetsDemo_cb_NewCon, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cb_NewCon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cb_NewCon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cb_NewCon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cb_NewCon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_cb_NewCon, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_cb_NewCon, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_cb_NewCon, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_cb_NewCon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_NewCon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_NewCon, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_NewCon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cb_NewCon, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_cb_NewCon, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_all(ui->WidgetsDemo_cb_NewCon, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_NewCon, 2, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cb_NewCon, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cb_NewCon, lv_color_hex(0x2196F3), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cb_NewCon, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_NewCon, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_NewCon, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cb_NewCon, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cb_NewCon, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cb_NewMsg
	ui->WidgetsDemo_cb_NewMsg = lv_checkbox_create(ui->WidgetsDemo_cont_Notification);
	lv_checkbox_set_text(ui->WidgetsDemo_cb_NewMsg, "New message");
	lv_obj_set_pos(ui->WidgetsDemo_cb_NewMsg, 20, 274);

	//Write style for WidgetsDemo_cb_NewMsg, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cb_NewMsg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cb_NewMsg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cb_NewMsg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cb_NewMsg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_cb_NewMsg, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_cb_NewMsg, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_cb_NewMsg, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_cb_NewMsg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_NewMsg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_NewMsg, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_NewMsg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cb_NewMsg, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_cb_NewMsg, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_all(ui->WidgetsDemo_cb_NewMsg, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_NewMsg, 2, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cb_NewMsg, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cb_NewMsg, lv_color_hex(0x2196F3), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cb_NewMsg, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_NewMsg, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_NewMsg, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cb_NewMsg, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cb_NewMsg, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cb_NewSub
	ui->WidgetsDemo_cb_NewSub = lv_checkbox_create(ui->WidgetsDemo_cont_Notification);
	lv_checkbox_set_text(ui->WidgetsDemo_cb_NewSub, "New subscriber");
	lv_obj_set_pos(ui->WidgetsDemo_cb_NewSub, 20, 211);

	//Write style for WidgetsDemo_cb_NewSub, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cb_NewSub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cb_NewSub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cb_NewSub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cb_NewSub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_cb_NewSub, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_cb_NewSub, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_cb_NewSub, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_cb_NewSub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_NewSub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_NewSub, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_NewSub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cb_NewSub, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_cb_NewSub, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_all(ui->WidgetsDemo_cb_NewSub, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_NewSub, 2, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cb_NewSub, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cb_NewSub, lv_color_hex(0x2196F3), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cb_NewSub, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_NewSub, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_NewSub, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cb_NewSub, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cb_NewSub, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cb_Milestone
	ui->WidgetsDemo_cb_Milestone = lv_checkbox_create(ui->WidgetsDemo_cont_Notification);
	lv_checkbox_set_text(ui->WidgetsDemo_cb_Milestone, "Milestone reached");
	lv_obj_set_pos(ui->WidgetsDemo_cb_Milestone, 20, 338);

	//Write style for WidgetsDemo_cb_Milestone, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cb_Milestone, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cb_Milestone, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cb_Milestone, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cb_Milestone, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_cb_Milestone, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_cb_Milestone, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_cb_Milestone, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_cb_Milestone, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_Milestone, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_Milestone, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_Milestone, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cb_Milestone, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_cb_Milestone, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_all(ui->WidgetsDemo_cb_Milestone, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_Milestone, 2, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cb_Milestone, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cb_Milestone, lv_color_hex(0x2196F3), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cb_Milestone, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_Milestone, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_Milestone, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cb_Milestone, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cb_Milestone, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cb_OutofStock
	ui->WidgetsDemo_cb_OutofStock = lv_checkbox_create(ui->WidgetsDemo_cont_Notification);
	lv_checkbox_set_text(ui->WidgetsDemo_cb_OutofStock, "Out of stock");
	lv_obj_set_pos(ui->WidgetsDemo_cb_OutofStock, 20, 402);

	//Write style for WidgetsDemo_cb_OutofStock, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cb_OutofStock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cb_OutofStock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cb_OutofStock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cb_OutofStock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_cb_OutofStock, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_cb_OutofStock, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_cb_OutofStock, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_cb_OutofStock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_OutofStock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_OutofStock, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_OutofStock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cb_OutofStock, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_cb_OutofStock, Part: LV_PART_INDICATOR, State: LV_STATE_DEFAULT.
	lv_obj_set_style_pad_all(ui->WidgetsDemo_cb_OutofStock, 3, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_cb_OutofStock, 2, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cb_OutofStock, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cb_OutofStock, lv_color_hex(0x2196F3), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cb_OutofStock, LV_BORDER_SIDE_FULL, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cb_OutofStock, 6, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cb_OutofStock, 255, LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cb_OutofStock, lv_color_hex(0xffffff), LV_PART_INDICATOR|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cb_OutofStock, LV_GRAD_DIR_NONE, LV_PART_INDICATOR|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Notification
	ui->WidgetsDemo_label_Notification = lv_label_create(ui->WidgetsDemo_cont_Notification);
	lv_label_set_text(ui->WidgetsDemo_label_Notification, "Notification");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Notification, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Notification, 20, 20);
	lv_obj_set_size(ui->WidgetsDemo_label_Notification, 270, 40);

	//Write style for WidgetsDemo_label_Notification, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Notification, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Notification, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Notification, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Notification, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Notification, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cont_Products
	ui->WidgetsDemo_cont_Products = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_3);
	lv_obj_set_pos(ui->WidgetsDemo_cont_Products, 21, 505);
	lv_obj_set_size(ui->WidgetsDemo_cont_Products, 350, 326);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_Products, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_Products, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_Products, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_Products, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_Products, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_Products, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_Products, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_Products, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_Products, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_Products, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_Products, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_Products, 15, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_Products, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_Products, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_Products, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_img_Clothes1
	ui->WidgetsDemo_img_Clothes1 = lv_img_create(ui->WidgetsDemo_cont_Products);
	lv_obj_add_flag(ui->WidgetsDemo_img_Clothes1, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->WidgetsDemo_img_Clothes1, &_clothes_alpha_98x107);
	lv_img_set_pivot(ui->WidgetsDemo_img_Clothes1, 50,50);
	lv_img_set_angle(ui->WidgetsDemo_img_Clothes1, 0);
	lv_obj_set_pos(ui->WidgetsDemo_img_Clothes1, 11, 70);
	lv_obj_set_size(ui->WidgetsDemo_img_Clothes1, 98, 107);

	//Write style for WidgetsDemo_img_Clothes1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->WidgetsDemo_img_Clothes1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->WidgetsDemo_img_Clothes1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_img_Clothes1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->WidgetsDemo_img_Clothes1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_ClothCat1
	ui->WidgetsDemo_label_ClothCat1 = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_ClothCat1, "Clothes");
	lv_label_set_long_mode(ui->WidgetsDemo_label_ClothCat1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_ClothCat1, 118, 121);
	lv_obj_set_size(ui->WidgetsDemo_label_ClothCat1, 168, 34);

	//Write style for WidgetsDemo_label_ClothCat1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_ClothCat1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_ClothCat1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_ClothCat1, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_ClothCat1, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_ClothCat1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_ClothCat1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_ClothCat1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_ClothCat1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_ClothCat1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_ClothCat1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_ClothCat1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_ClothCat1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_ClothCat1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_ClothCat1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Prince1
	ui->WidgetsDemo_label_Prince1 = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_Prince1, "Blue jeans  $722");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Prince1, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Prince1, 118, 86);
	lv_obj_set_size(ui->WidgetsDemo_label_Prince1, 283, 26);

	//Write style for WidgetsDemo_label_Prince1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Prince1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Prince1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Prince1, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Prince1, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Prince1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Prince1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Prince1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Prince1, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Prince1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Prince1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Prince1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Prince1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Prince1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Prince1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_TopProducts
	ui->WidgetsDemo_label_TopProducts = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_TopProducts, "Top products");
	lv_label_set_long_mode(ui->WidgetsDemo_label_TopProducts, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_TopProducts, 20, 19);
	lv_obj_set_size(ui->WidgetsDemo_label_TopProducts, 293, 38);

	//Write style for WidgetsDemo_label_TopProducts, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_TopProducts, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_TopProducts, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_TopProducts, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_TopProducts, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_TopProducts, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_TopProducts, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_TopProducts, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_TopProducts, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_TopProducts, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_TopProducts, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_TopProducts, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_TopProducts, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_TopProducts, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_TopProducts, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_ClothCat2
	ui->WidgetsDemo_label_ClothCat2 = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_ClothCat2, "Clothes");
	lv_label_set_long_mode(ui->WidgetsDemo_label_ClothCat2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_ClothCat2, 118, 244);
	lv_obj_set_size(ui->WidgetsDemo_label_ClothCat2, 168, 34);

	//Write style for WidgetsDemo_label_ClothCat2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_ClothCat2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_ClothCat2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_ClothCat2, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_ClothCat2, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_ClothCat2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_ClothCat2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_ClothCat2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_ClothCat2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_ClothCat2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_ClothCat2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_ClothCat2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_ClothCat2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_ClothCat2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_ClothCat2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Prince2
	ui->WidgetsDemo_label_Prince2 = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_Prince2, "Blue jeans  $411");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Prince2, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Prince2, 118, 211);
	lv_obj_set_size(ui->WidgetsDemo_label_Prince2, 283, 26);

	//Write style for WidgetsDemo_label_Prince2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Prince2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Prince2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Prince2, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Prince2, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Prince2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Prince2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Prince2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Prince2, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Prince2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Prince2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Prince2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Prince2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Prince2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Prince2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_img_Clothes2
	ui->WidgetsDemo_img_Clothes2 = lv_img_create(ui->WidgetsDemo_cont_Products);
	lv_obj_add_flag(ui->WidgetsDemo_img_Clothes2, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->WidgetsDemo_img_Clothes2, &_clothes_alpha_98x107);
	lv_img_set_pivot(ui->WidgetsDemo_img_Clothes2, 50,50);
	lv_img_set_angle(ui->WidgetsDemo_img_Clothes2, 0);
	lv_obj_set_pos(ui->WidgetsDemo_img_Clothes2, 11, 195);
	lv_obj_set_size(ui->WidgetsDemo_img_Clothes2, 98, 107);

	//Write style for WidgetsDemo_img_Clothes2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->WidgetsDemo_img_Clothes2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->WidgetsDemo_img_Clothes2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_img_Clothes2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->WidgetsDemo_img_Clothes2, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_ClothCat3
	ui->WidgetsDemo_label_ClothCat3 = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_ClothCat3, "Clothes");
	lv_label_set_long_mode(ui->WidgetsDemo_label_ClothCat3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_ClothCat3, 118, 368);
	lv_obj_set_size(ui->WidgetsDemo_label_ClothCat3, 168, 34);

	//Write style for WidgetsDemo_label_ClothCat3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_ClothCat3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_ClothCat3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_ClothCat3, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_ClothCat3, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_ClothCat3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_ClothCat3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_ClothCat3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_ClothCat3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_ClothCat3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_ClothCat3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_ClothCat3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_ClothCat3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_ClothCat3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_ClothCat3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Prince3
	ui->WidgetsDemo_label_Prince3 = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_Prince3, "Blue jeans  $917");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Prince3, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Prince3, 118, 336);
	lv_obj_set_size(ui->WidgetsDemo_label_Prince3, 283, 26);

	//Write style for WidgetsDemo_label_Prince3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Prince3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Prince3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Prince3, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Prince3, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Prince3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Prince3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Prince3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Prince3, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Prince3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Prince3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Prince3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Prince3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Prince3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Prince3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_img_Clothes3
	ui->WidgetsDemo_img_Clothes3 = lv_img_create(ui->WidgetsDemo_cont_Products);
	lv_obj_add_flag(ui->WidgetsDemo_img_Clothes3, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->WidgetsDemo_img_Clothes3, &_clothes_alpha_98x107);
	lv_img_set_pivot(ui->WidgetsDemo_img_Clothes3, 50,50);
	lv_img_set_angle(ui->WidgetsDemo_img_Clothes3, 0);
	lv_obj_set_pos(ui->WidgetsDemo_img_Clothes3, 11, 320);
	lv_obj_set_size(ui->WidgetsDemo_img_Clothes3, 98, 107);

	//Write style for WidgetsDemo_img_Clothes3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->WidgetsDemo_img_Clothes3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->WidgetsDemo_img_Clothes3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_img_Clothes3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->WidgetsDemo_img_Clothes3, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_ClothCat4
	ui->WidgetsDemo_label_ClothCat4 = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_ClothCat4, "Clothes");
	lv_label_set_long_mode(ui->WidgetsDemo_label_ClothCat4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_ClothCat4, 118, 492);
	lv_obj_set_size(ui->WidgetsDemo_label_ClothCat4, 168, 34);

	//Write style for WidgetsDemo_label_ClothCat4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_ClothCat4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_ClothCat4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_ClothCat4, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_ClothCat4, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_ClothCat4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_ClothCat4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_ClothCat4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_ClothCat4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_ClothCat4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_ClothCat4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_ClothCat4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_ClothCat4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_ClothCat4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_ClothCat4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Prince4
	ui->WidgetsDemo_label_Prince4 = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_Prince4, "Blue jeans  $64");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Prince4, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Prince4, 118, 462);
	lv_obj_set_size(ui->WidgetsDemo_label_Prince4, 283, 26);

	//Write style for WidgetsDemo_label_Prince4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Prince4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Prince4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Prince4, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Prince4, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Prince4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Prince4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Prince4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Prince4, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Prince4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Prince4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Prince4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Prince4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Prince4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Prince4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_img_Clothes4
	ui->WidgetsDemo_img_Clothes4 = lv_img_create(ui->WidgetsDemo_cont_Products);
	lv_obj_add_flag(ui->WidgetsDemo_img_Clothes4, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->WidgetsDemo_img_Clothes4, &_clothes_alpha_98x107);
	lv_img_set_pivot(ui->WidgetsDemo_img_Clothes4, 50,50);
	lv_img_set_angle(ui->WidgetsDemo_img_Clothes4, 0);
	lv_obj_set_pos(ui->WidgetsDemo_img_Clothes4, 11, 446);
	lv_obj_set_size(ui->WidgetsDemo_img_Clothes4, 98, 107);

	//Write style for WidgetsDemo_img_Clothes4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->WidgetsDemo_img_Clothes4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->WidgetsDemo_img_Clothes4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_img_Clothes4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->WidgetsDemo_img_Clothes4, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_ClothCat5
	ui->WidgetsDemo_label_ClothCat5 = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_ClothCat5, "Clothes");
	lv_label_set_long_mode(ui->WidgetsDemo_label_ClothCat5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_ClothCat5, 118, 615);
	lv_obj_set_size(ui->WidgetsDemo_label_ClothCat5, 168, 34);

	//Write style for WidgetsDemo_label_ClothCat5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_ClothCat5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_ClothCat5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_ClothCat5, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_ClothCat5, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_ClothCat5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_ClothCat5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_ClothCat5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_ClothCat5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_ClothCat5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_ClothCat5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_ClothCat5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_ClothCat5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_ClothCat5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_ClothCat5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Prince5
	ui->WidgetsDemo_label_Prince5 = lv_label_create(ui->WidgetsDemo_cont_Products);
	lv_label_set_text(ui->WidgetsDemo_label_Prince5, "Blue jeans  $805");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Prince5, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Prince5, 118, 587);
	lv_obj_set_size(ui->WidgetsDemo_label_Prince5, 283, 26);

	//Write style for WidgetsDemo_label_Prince5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Prince5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Prince5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Prince5, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Prince5, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Prince5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Prince5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Prince5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Prince5, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Prince5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Prince5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Prince5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Prince5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Prince5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Prince5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_img_Clothes5
	ui->WidgetsDemo_img_Clothes5 = lv_img_create(ui->WidgetsDemo_cont_Products);
	lv_obj_add_flag(ui->WidgetsDemo_img_Clothes5, LV_OBJ_FLAG_CLICKABLE);
	lv_img_set_src(ui->WidgetsDemo_img_Clothes5, &_clothes_alpha_98x107);
	lv_img_set_pivot(ui->WidgetsDemo_img_Clothes5, 50,50);
	lv_img_set_angle(ui->WidgetsDemo_img_Clothes5, 0);
	lv_obj_set_pos(ui->WidgetsDemo_img_Clothes5, 11, 571);
	lv_obj_set_size(ui->WidgetsDemo_img_Clothes5, 98, 107);

	//Write style for WidgetsDemo_img_Clothes5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_img_recolor_opa(ui->WidgetsDemo_img_Clothes5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_img_opa(ui->WidgetsDemo_img_Clothes5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_img_Clothes5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_clip_corner(ui->WidgetsDemo_img_Clothes5, true, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cont_Summary
	ui->WidgetsDemo_cont_Summary = lv_obj_create(ui->WidgetsDemo_tabview_Main_tab_3);
	lv_obj_set_pos(ui->WidgetsDemo_cont_Summary, 21, 10);
	lv_obj_set_size(ui->WidgetsDemo_cont_Summary, 730, 458);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_Summary, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_Summary, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_Summary, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_cont_Summary, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_cont_Summary, lv_color_hex(0xc9c9c9), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_cont_Summary, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_Summary, 14, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_Summary, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_Summary, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_Summary, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_Summary, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_Summary, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_Summary, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_Summary, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_Summary, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_MS
	ui->WidgetsDemo_label_MS = lv_label_create(ui->WidgetsDemo_cont_Summary);
	lv_label_set_text(ui->WidgetsDemo_label_MS, "Monthly Summary\n$27,123.25");
	lv_label_set_long_mode(ui->WidgetsDemo_label_MS, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_MS, 16, 19);
	lv_obj_set_size(ui->WidgetsDemo_label_MS, 343, 68);

	//Write style for WidgetsDemo_label_MS, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_MS, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_MS, &lv_font_montserratMedium_32, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_MS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_MS, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Date
	ui->WidgetsDemo_label_Date = lv_label_create(ui->WidgetsDemo_cont_Summary);
	lv_label_set_text(ui->WidgetsDemo_label_Date, "8-15 July, 2023");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Date, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Date, 380, 26);
	lv_obj_set_size(ui->WidgetsDemo_label_Date, 286, 28);

	//Write style for WidgetsDemo_label_Date, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Date, lv_color_hex(0xa5a5a5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Date, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Date, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Date, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Date, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_label_Growth
	ui->WidgetsDemo_label_Growth = lv_label_create(ui->WidgetsDemo_cont_Summary);
	lv_label_set_text(ui->WidgetsDemo_label_Growth, "^ 17% growth this week");
	lv_label_set_long_mode(ui->WidgetsDemo_label_Growth, LV_LABEL_LONG_WRAP);
	lv_obj_set_pos(ui->WidgetsDemo_label_Growth, 380, 61);
	lv_obj_set_size(ui->WidgetsDemo_label_Growth, 286, 28);

	//Write style for WidgetsDemo_label_Growth, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_label_Growth, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_label_Growth, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_label_Growth, lv_color_hex(0x06b74a), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_label_Growth, &lv_font_montserratMedium_23, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_label_Growth, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_letter_space(ui->WidgetsDemo_label_Growth, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_line_space(ui->WidgetsDemo_label_Growth, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_label_Growth, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_label_Growth, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_label_Growth, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_label_Growth, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_label_Growth, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_label_Growth, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_label_Growth, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_chart_MS
	ui->WidgetsDemo_chart_MS = lv_chart_create(ui->WidgetsDemo_cont_Summary);
	lv_chart_set_type(ui->WidgetsDemo_chart_MS, LV_CHART_TYPE_BAR);
	lv_chart_set_div_line_count(ui->WidgetsDemo_chart_MS, 5, 0);
	lv_chart_set_point_count(ui->WidgetsDemo_chart_MS, 7);
	lv_chart_set_range(ui->WidgetsDemo_chart_MS, LV_CHART_AXIS_PRIMARY_Y, 0, 100);
	lv_chart_set_axis_tick(ui->WidgetsDemo_chart_MS, LV_CHART_AXIS_PRIMARY_Y, 1, 1, 5, 1, true, 80);
	lv_chart_set_range(ui->WidgetsDemo_chart_MS, LV_CHART_AXIS_SECONDARY_Y, 0, 100);
	lv_chart_set_axis_tick(ui->WidgetsDemo_chart_MS, LV_CHART_AXIS_PRIMARY_X, 1, 1, 7, 1, true, 80);
	lv_chart_set_zoom_x(ui->WidgetsDemo_chart_MS, 256);
	lv_chart_set_zoom_y(ui->WidgetsDemo_chart_MS, 256);
	ui->WidgetsDemo_chart_MS_0 = lv_chart_add_series(ui->WidgetsDemo_chart_MS, lv_color_hex(0x000000), LV_CHART_AXIS_PRIMARY_Y);
#if LV_USE_FREEMASTER == 0
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MS, ui->WidgetsDemo_chart_MS_0, 65);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MS, ui->WidgetsDemo_chart_MS_0, 75);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MS, ui->WidgetsDemo_chart_MS_0, 90);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MS, ui->WidgetsDemo_chart_MS_0, 85);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MS, ui->WidgetsDemo_chart_MS_0, 88);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MS, ui->WidgetsDemo_chart_MS_0, 76);
	lv_chart_set_next_value(ui->WidgetsDemo_chart_MS, ui->WidgetsDemo_chart_MS_0, 80);
#endif
	lv_obj_set_pos(ui->WidgetsDemo_chart_MS, 61, 109);
	lv_obj_set_size(ui->WidgetsDemo_chart_MS, 631, 303);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_chart_MS, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_chart_MS, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_chart_MS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_chart_MS, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_chart_MS, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_chart_MS, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_opa(ui->WidgetsDemo_chart_MS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_color(ui->WidgetsDemo_chart_MS, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_side(ui->WidgetsDemo_chart_MS, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_chart_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->WidgetsDemo_chart_MS, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->WidgetsDemo_chart_MS, lv_color_hex(0xe8e8e8), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->WidgetsDemo_chart_MS, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_chart_MS, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write style for WidgetsDemo_chart_MS, Part: LV_PART_TICKS, State: LV_STATE_DEFAULT.
	lv_obj_set_style_text_color(ui->WidgetsDemo_chart_MS, lv_color_hex(0x151212), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_chart_MS, &lv_font_montserratMedium_25, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_chart_MS, 255, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_width(ui->WidgetsDemo_chart_MS, 2, LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_color(ui->WidgetsDemo_chart_MS, lv_color_hex(0xe8e8e8), LV_PART_TICKS|LV_STATE_DEFAULT);
	lv_obj_set_style_line_opa(ui->WidgetsDemo_chart_MS, 255, LV_PART_TICKS|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_cont_ColorChanger
	ui->WidgetsDemo_cont_ColorChanger = lv_obj_create(ui->WidgetsDemo);
	lv_obj_set_pos(ui->WidgetsDemo_cont_ColorChanger, 16, 392);
	lv_obj_set_size(ui->WidgetsDemo_cont_ColorChanger, 766, 70);
	lv_obj_set_scrollbar_mode(ui->WidgetsDemo_cont_ColorChanger, LV_SCROLLBAR_MODE_OFF);

	//Write style for WidgetsDemo_cont_ColorChanger, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_border_width(ui->WidgetsDemo_cont_ColorChanger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_cont_ColorChanger, 66, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_cont_ColorChanger, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_cont_ColorChanger, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_cont_ColorChanger, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_top(ui->WidgetsDemo_cont_ColorChanger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_bottom(ui->WidgetsDemo_cont_ColorChanger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_left(ui->WidgetsDemo_cont_ColorChanger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_pad_right(ui->WidgetsDemo_cont_ColorChanger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_cont_ColorChanger, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_btn_Blue
	ui->WidgetsDemo_btn_Blue = lv_btn_create(ui->WidgetsDemo_cont_ColorChanger);
	ui->WidgetsDemo_btn_Blue_label = lv_label_create(ui->WidgetsDemo_btn_Blue);
	lv_label_set_text(ui->WidgetsDemo_btn_Blue_label, "");
	lv_label_set_long_mode(ui->WidgetsDemo_btn_Blue_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->WidgetsDemo_btn_Blue_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_btn_Blue, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->WidgetsDemo_btn_Blue_label, LV_PCT(100));
	lv_obj_set_pos(ui->WidgetsDemo_btn_Blue, 40, 20);
	lv_obj_set_size(ui->WidgetsDemo_btn_Blue, 32, 32);

	//Write style for WidgetsDemo_btn_Blue, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_Blue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_Blue, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_Blue, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_Blue, 33, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_Blue, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->WidgetsDemo_btn_Blue, lv_color_hex(0xd5d5d5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->WidgetsDemo_btn_Blue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->WidgetsDemo_btn_Blue, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->WidgetsDemo_btn_Blue, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->WidgetsDemo_btn_Blue, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_Blue, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_Blue, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_Blue, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_btn_Blue, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_btn_Green
	ui->WidgetsDemo_btn_Green = lv_btn_create(ui->WidgetsDemo_cont_ColorChanger);
	ui->WidgetsDemo_btn_Green_label = lv_label_create(ui->WidgetsDemo_btn_Green);
	lv_label_set_text(ui->WidgetsDemo_btn_Green_label, "");
	lv_label_set_long_mode(ui->WidgetsDemo_btn_Green_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->WidgetsDemo_btn_Green_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_btn_Green, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->WidgetsDemo_btn_Green_label, LV_PCT(100));
	lv_obj_set_pos(ui->WidgetsDemo_btn_Green, 130, 20);
	lv_obj_set_size(ui->WidgetsDemo_btn_Green, 32, 32);

	//Write style for WidgetsDemo_btn_Green, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_Green, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_Green, lv_color_hex(0x4caf50), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_Green, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_Green, 33, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_Green, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->WidgetsDemo_btn_Green, lv_color_hex(0xd5d5d5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->WidgetsDemo_btn_Green, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->WidgetsDemo_btn_Green, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->WidgetsDemo_btn_Green, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->WidgetsDemo_btn_Green, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_Green, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_Green, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_Green, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_btn_Green, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_btn_Grey
	ui->WidgetsDemo_btn_Grey = lv_btn_create(ui->WidgetsDemo_cont_ColorChanger);
	ui->WidgetsDemo_btn_Grey_label = lv_label_create(ui->WidgetsDemo_btn_Grey);
	lv_label_set_text(ui->WidgetsDemo_btn_Grey_label, "");
	lv_label_set_long_mode(ui->WidgetsDemo_btn_Grey_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->WidgetsDemo_btn_Grey_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_btn_Grey, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->WidgetsDemo_btn_Grey_label, LV_PCT(100));
	lv_obj_set_pos(ui->WidgetsDemo_btn_Grey, 220, 20);
	lv_obj_set_size(ui->WidgetsDemo_btn_Grey, 32, 32);

	//Write style for WidgetsDemo_btn_Grey, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_Grey, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_Grey, lv_color_hex(0x607d8b), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_Grey, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_Grey, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_Grey, 33, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_Grey, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->WidgetsDemo_btn_Grey, lv_color_hex(0xd5d5d5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->WidgetsDemo_btn_Grey, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->WidgetsDemo_btn_Grey, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->WidgetsDemo_btn_Grey, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->WidgetsDemo_btn_Grey, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_Grey, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_Grey, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_Grey, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_btn_Grey, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_btn_Orange
	ui->WidgetsDemo_btn_Orange = lv_btn_create(ui->WidgetsDemo_cont_ColorChanger);
	ui->WidgetsDemo_btn_Orange_label = lv_label_create(ui->WidgetsDemo_btn_Orange);
	lv_label_set_text(ui->WidgetsDemo_btn_Orange_label, "");
	lv_label_set_long_mode(ui->WidgetsDemo_btn_Orange_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->WidgetsDemo_btn_Orange_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_btn_Orange, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->WidgetsDemo_btn_Orange_label, LV_PCT(100));
	lv_obj_set_pos(ui->WidgetsDemo_btn_Orange, 310, 20);
	lv_obj_set_size(ui->WidgetsDemo_btn_Orange, 32, 32);

	//Write style for WidgetsDemo_btn_Orange, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_Orange, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_Orange, lv_color_hex(0xff9800), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_Orange, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_Orange, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_Orange, 33, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_Orange, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->WidgetsDemo_btn_Orange, lv_color_hex(0xd5d5d5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->WidgetsDemo_btn_Orange, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->WidgetsDemo_btn_Orange, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->WidgetsDemo_btn_Orange, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->WidgetsDemo_btn_Orange, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_Orange, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_Orange, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_Orange, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_btn_Orange, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_btn_Red
	ui->WidgetsDemo_btn_Red = lv_btn_create(ui->WidgetsDemo_cont_ColorChanger);
	ui->WidgetsDemo_btn_Red_label = lv_label_create(ui->WidgetsDemo_btn_Red);
	lv_label_set_text(ui->WidgetsDemo_btn_Red_label, "");
	lv_label_set_long_mode(ui->WidgetsDemo_btn_Red_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->WidgetsDemo_btn_Red_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_btn_Red, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->WidgetsDemo_btn_Red_label, LV_PCT(100));
	lv_obj_set_pos(ui->WidgetsDemo_btn_Red, 400, 20);
	lv_obj_set_size(ui->WidgetsDemo_btn_Red, 32, 32);

	//Write style for WidgetsDemo_btn_Red, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_Red, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_Red, lv_color_hex(0xf44336), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_Red, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_Red, 33, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_Red, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->WidgetsDemo_btn_Red, lv_color_hex(0xd5d5d5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->WidgetsDemo_btn_Red, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->WidgetsDemo_btn_Red, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->WidgetsDemo_btn_Red, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->WidgetsDemo_btn_Red, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_Red, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_Red, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_Red, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_btn_Red, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_btn_Purple
	ui->WidgetsDemo_btn_Purple = lv_btn_create(ui->WidgetsDemo_cont_ColorChanger);
	ui->WidgetsDemo_btn_Purple_label = lv_label_create(ui->WidgetsDemo_btn_Purple);
	lv_label_set_text(ui->WidgetsDemo_btn_Purple_label, "");
	lv_label_set_long_mode(ui->WidgetsDemo_btn_Purple_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->WidgetsDemo_btn_Purple_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_btn_Purple, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->WidgetsDemo_btn_Purple_label, LV_PCT(100));
	lv_obj_set_pos(ui->WidgetsDemo_btn_Purple, 490, 20);
	lv_obj_set_size(ui->WidgetsDemo_btn_Purple, 32, 32);

	//Write style for WidgetsDemo_btn_Purple, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_Purple, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_Purple, lv_color_hex(0x9327b0), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_Purple, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_Purple, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_Purple, 33, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_Purple, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->WidgetsDemo_btn_Purple, lv_color_hex(0xd5d5d5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->WidgetsDemo_btn_Purple, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->WidgetsDemo_btn_Purple, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->WidgetsDemo_btn_Purple, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->WidgetsDemo_btn_Purple, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_Purple, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_Purple, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_Purple, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_btn_Purple, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_btn_Teal
	ui->WidgetsDemo_btn_Teal = lv_btn_create(ui->WidgetsDemo_cont_ColorChanger);
	ui->WidgetsDemo_btn_Teal_label = lv_label_create(ui->WidgetsDemo_btn_Teal);
	lv_label_set_text(ui->WidgetsDemo_btn_Teal_label, "");
	lv_label_set_long_mode(ui->WidgetsDemo_btn_Teal_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->WidgetsDemo_btn_Teal_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_btn_Teal, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->WidgetsDemo_btn_Teal_label, LV_PCT(100));
	lv_obj_set_pos(ui->WidgetsDemo_btn_Teal, 580, 20);
	lv_obj_set_size(ui->WidgetsDemo_btn_Teal, 32, 32);

	//Write style for WidgetsDemo_btn_Teal, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_Teal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_Teal, lv_color_hex(0x009688), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_Teal, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_Teal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_Teal, 33, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_Teal, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_color(ui->WidgetsDemo_btn_Teal, lv_color_hex(0xd5d5d5), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_opa(ui->WidgetsDemo_btn_Teal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_spread(ui->WidgetsDemo_btn_Teal, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_x(ui->WidgetsDemo_btn_Teal, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_ofs_y(ui->WidgetsDemo_btn_Teal, 1, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_Teal, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_Teal, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_Teal, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_btn_Teal, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//Write codes WidgetsDemo_btn_ColorSW
	ui->WidgetsDemo_btn_ColorSW = lv_btn_create(ui->WidgetsDemo);
	ui->WidgetsDemo_btn_ColorSW_label = lv_label_create(ui->WidgetsDemo_btn_ColorSW);
	lv_label_set_text(ui->WidgetsDemo_btn_ColorSW_label, "");
	lv_label_set_long_mode(ui->WidgetsDemo_btn_ColorSW_label, LV_LABEL_LONG_WRAP);
	lv_obj_align(ui->WidgetsDemo_btn_ColorSW_label, LV_ALIGN_CENTER, 0, 0);
	lv_obj_set_style_pad_all(ui->WidgetsDemo_btn_ColorSW, 0, LV_STATE_DEFAULT);
	lv_obj_set_width(ui->WidgetsDemo_btn_ColorSW_label, LV_PCT(100));
	lv_obj_set_pos(ui->WidgetsDemo_btn_ColorSW, 720, 397);
	lv_obj_set_size(ui->WidgetsDemo_btn_ColorSW, 58, 58);
	lv_obj_add_flag(ui->WidgetsDemo_btn_ColorSW, LV_OBJ_FLAG_FLOATING);

	//Write style for WidgetsDemo_btn_ColorSW, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
	lv_obj_set_style_bg_opa(ui->WidgetsDemo_btn_ColorSW, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_color(ui->WidgetsDemo_btn_ColorSW, lv_color_hex(0x2196F3), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_bg_grad_dir(ui->WidgetsDemo_btn_ColorSW, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_border_width(ui->WidgetsDemo_btn_ColorSW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_radius(ui->WidgetsDemo_btn_ColorSW, 60, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_shadow_width(ui->WidgetsDemo_btn_ColorSW, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_color(ui->WidgetsDemo_btn_ColorSW, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_font(ui->WidgetsDemo_btn_ColorSW, &lv_font_montserratMedium_26, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_opa(ui->WidgetsDemo_btn_ColorSW, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
	lv_obj_set_style_text_align(ui->WidgetsDemo_btn_ColorSW, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

	//The custom code of WidgetsDemo.
	/*Reset the color changer size and position*/
	lv_obj_set_size(ui->WidgetsDemo_cont_ColorChanger, WIDTH_REFER(40), WIDTH_REFER(40));
	lv_obj_align(ui->WidgetsDemo_cont_ColorChanger, LV_ALIGN_BOTTOM_RIGHT, - WIDTH_REFER(10), - WIDTH_REFER(10));
	
	/*Reset the color sw btn size and position, add event callback*/
	lv_obj_set_size(ui->WidgetsDemo_btn_ColorSW, WIDTH_REFER(36), WIDTH_REFER(36));
	lv_obj_align(ui->WidgetsDemo_btn_ColorSW, LV_ALIGN_BOTTOM_RIGHT, - WIDTH_REFER(12), - WIDTH_REFER(12));
	lv_obj_add_event_cb(ui->WidgetsDemo_btn_ColorSW, color_changer_event_cb, LV_EVENT_ALL, ui->WidgetsDemo_cont_ColorChanger);

	/*Set Button background*/
	lv_obj_set_style_bg_img_src(ui->WidgetsDemo_btn_ColorSW, LV_SYMBOL_TINT, 0);

	/*Set event callback for each color button*/
	uint32_t i;
	lv_obj_t * btn;
	for(i = 0; i < lv_obj_get_child_cnt(ui->WidgetsDemo_cont_ColorChanger); i++) {
		btn = lv_obj_get_child(ui->WidgetsDemo_cont_ColorChanger, i);
		lv_obj_set_style_opa(btn, 0, 0);
		lv_obj_add_event_cb(btn, color_event_cb, LV_EVENT_ALL, btn);
	}

	/*Set call and envelop icons*/
	lv_img_set_src(ui->WidgetsDemo_label_IconEmail, LV_SYMBOL_ENVELOPE);
	lv_img_set_src(ui->WidgetsDemo_label_IconCall, LV_SYMBOL_CALL );

	/*Add more event callback for textarea*/
	lv_obj_add_event_cb(ui->WidgetsDemo_ta_UName, textarea_event_cb, LV_EVENT_ALL, ui->g_kb_WidgetsDemo);
	lv_obj_add_event_cb(ui->WidgetsDemo_ta_Password, textarea_event_cb, LV_EVENT_ALL, ui->g_kb_WidgetsDemo);

	/*Add event callback for three charts*/
	lv_obj_add_event_cb(ui->WidgetsDemo_chart_MS, shop_chart_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->WidgetsDemo_chart_UV, chart_event_cb, LV_EVENT_ALL, NULL);
	lv_obj_add_event_cb(ui->WidgetsDemo_chart_MR, chart_event_cb, LV_EVENT_ALL, NULL);

	/*Disable fifth checkbox*/
	lv_obj_add_state(ui->WidgetsDemo_cb_Milestone, LV_STATE_DISABLED);

	/*Set checkbox symbol size*/
	lv_obj_t * cb;
	for(i = 0; i < lv_obj_get_child_cnt(ui->WidgetsDemo_cont_Notification); i++) {
		cb = lv_obj_get_child(ui->WidgetsDemo_cont_Notification, i);
		if(lv_obj_get_class(cb) == &lv_checkbox_class) {
			lv_obj_set_style_text_font(cb, lv_obj_get_style_text_font(ui->WidgetsDemo_cb_ItemPur, 0), LV_PART_INDICATOR|LV_STATE_CHECKED);
		}
	}

	//Update current screen layout.
	lv_obj_update_layout(ui->WidgetsDemo);

	//Init events for screen.
	events_init_WidgetsDemo(ui);
}
