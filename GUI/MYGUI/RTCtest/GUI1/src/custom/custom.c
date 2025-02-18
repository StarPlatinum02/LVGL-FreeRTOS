/*
* Copyright 2023 NXP
* NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"
#include "rtc.h"
#include "main.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */
void label_cb(lv_event_t * e) {

    // 根据事件类型处理
	  lv_ui *ui =lv_event_get_user_data(e);
    if(lv_event_get_code(e) == LV_EVENT_PRESSED) {
		// 获取用户数据
    float * dht11data  = (float *)lv_event_get_param(e);
		float temp = dht11data[0];
		float humi = dht11data[1];
    char str[5];
		char temp1 = sprintf(str,"%01f",temp);
		char humi1 = sprintf(str,"%01f",humi);
        // 更新label的值		
    lv_label_set_text_fmt(ui->screen_2_label_1,"HELLO");
    }
}

void custom_init(lv_ui *ui)
{
			RTC_DateTypeDef sDate; 
			RTC_TimeTypeDef sTime; 
			HAL_RTC_GetTime(&hrtc, &sTime, RTC_FORMAT_BIN); 
			HAL_RTC_GetDate(&hrtc, &sDate, RTC_FORMAT_BIN); 	
			lv_label_set_text_fmt(ui->screen_1_label_4,"%d",2000 + sDate.Year);
			lv_label_set_text_fmt(ui->screen_1_label_5,"%02d",sDate.Month);
			lv_label_set_text_fmt(ui->screen_1_label_6,"%02d",sDate.Date);
			lv_label_set_text_fmt(ui->screen_1_label_1,"%02d",sTime.Hours);
			lv_label_set_text_fmt(ui->screen_1_label_2,"%02d",sTime.Minutes);
			lv_label_set_text_fmt(ui->screen_1_label_3,"%02d",sTime.Seconds);
    /* Add your codes here */
}

