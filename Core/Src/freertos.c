/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "gui_guider.h"
#include "events_init.h"
#include "touch.h"
#include "custom.h"
#include "timers.h"
#include "dht11.h"
#include "queue.h"
#include "semphr.h"
#include "stdio.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
//lv_ui *ui;
lv_ui guider_ui;
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */
static uint8_t lightStackBuffer[128*4];
static StaticTask_t lightTaskBuffer;
static TaskHandle_t xLightTaskHandle;//句柄：指向函数的栈的指针
DHT11_T gDht11;//存放dht11的数�?

/* USER CODE END Variables */
/* Definitions for Task_LCD */
osThreadId_t Task_LCDHandle;
const osThreadAttr_t Task_LCD_attributes = {
  .name = "Task_LCD",
  .stack_size = 512 * 4,
  .priority = (osPriority_t) osPriorityNormal1,
};
/* Definitions for Task_TOUCH */
osThreadId_t Task_TOUCHHandle;
const osThreadAttr_t Task_TOUCH_attributes = {
  .name = "Task_TOUCH",
  .stack_size = 1024 * 4,
  .priority = (osPriority_t) osPriorityNormal3,
};
/* Definitions for Task_DHT11 */
osThreadId_t Task_DHT11Handle;
const osThreadAttr_t Task_DHT11_attributes = {
  .name = "Task_DHT11",
  .stack_size = 512 * 4,
  .priority = (osPriority_t) osPriorityNormal2,
};
/* Definitions for Task_updata */
osThreadId_t Task_updataHandle;
const osThreadAttr_t Task_updata_attributes = {
  .name = "Task_updata",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal1,
};
/* Definitions for DHT11Queue */
osMessageQueueId_t DHT11QueueHandle;
const osMessageQueueAttr_t DHT11Queue_attributes = {
  .name = "DHT11Queue"
};
/* Definitions for Timer_Periodic */
osTimerId_t Timer_PeriodicHandle;
const osTimerAttr_t Timer_Periodic_attributes = {
  .name = "Timer_Periodic"
};
/* Definitions for DHT11Mutex01 */
osMutexId_t DHT11Mutex01Handle;
const osMutexAttr_t DHT11Mutex01_attributes = {
  .name = "DHT11Mutex01"
};
/* Definitions for handlerMutex */
osMutexId_t handlerMutexHandle;
const osMutexAttr_t handlerMutex_attributes = {
  .name = "handlerMutex"
};
/* Definitions for myBinarySem01 */
osSemaphoreId_t myBinarySem01Handle;
const osSemaphoreAttr_t myBinarySem01_attributes = {
  .name = "myBinarySem01"
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

/* USER CODE END FunctionPrototypes */

void Taskfunction_LCD(void *argument);
void function_TOUCH(void *argument);
void F_DHT11(void *argument);
void fuction_updata(void *argument);
void Callback01(void *argument);

void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/* Hook prototypes */
void vApplicationTickHook(void);

/* USER CODE BEGIN 3 */
void vApplicationTickHook( void )
{
	
   lv_tick_inc(1);
   /* This function will be called by each tick interrupt if
   configUSE_TICK_HOOK is set to 1 in FreeRTOSConfig.h. User code can be
   added here, but the tick hook is called from an interrupt context, so
   code must not attempt to block, and only the interrupt safe FreeRTOS API
   functions can be used (those that end in FromISR()). */
}
/* USER CODE END 3 */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */
		TaskHandle_t xSoundTaskHandle;
		BaseType_t ret;
  /* USER CODE END Init */
  /* Create the mutex(es) */
  /* creation of DHT11Mutex01 */
  DHT11Mutex01Handle = osMutexNew(&DHT11Mutex01_attributes);

  /* creation of handlerMutex */
  handlerMutexHandle = osMutexNew(&handlerMutex_attributes);

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* Create the semaphores(s) */
  /* creation of myBinarySem01 */
  myBinarySem01Handle = osSemaphoreNew(1, 1, &myBinarySem01_attributes);

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* Create the timer(s) */
  /* creation of Timer_Periodic */
  Timer_PeriodicHandle = osTimerNew(Callback01, osTimerPeriodic, NULL, &Timer_Periodic_attributes);

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* Create the queue(s) */
  /* creation of DHT11Queue */
  DHT11QueueHandle = osMessageQueueNew (5, sizeof(float)*2, &DHT11Queue_attributes);

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of Task_LCD */
  Task_LCDHandle = osThreadNew(Taskfunction_LCD, NULL, &Task_LCD_attributes);

  /* creation of Task_TOUCH */
  Task_TOUCHHandle = osThreadNew(function_TOUCH, NULL, &Task_TOUCH_attributes);

  /* creation of Task_DHT11 */
  Task_DHT11Handle = osThreadNew(F_DHT11, NULL, &Task_DHT11_attributes);

  /* creation of Task_updata */
  Task_updataHandle = osThreadNew(fuction_updata, NULL, &Task_updata_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... *///添加线程
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_Taskfunction_LCD */
/**
  * @brief  Function implementing the Task_LCD thread.
  * @param  argument: Not used
  * @retval None
  */
/* USER CODE END Header_Taskfunction_LCD */
void Taskfunction_LCD(void *argument)
{
  /* USER CODE BEGIN Taskfunction_LCD */
	float dht11_data[2] = {0};
	float temperature;      //温度
  float humidity;         //湿度
  /* Infinite loop */
  for(;;)
  {		
 	 xSemaphoreTake(DHT11Mutex01Handle, portMAX_DELAY);   //上锁
   BaseType_t  wait_cnt = uxQueueMessagesWaiting(DHT11QueueHandle);
   if (wait_cnt <= 0){   
        xSemaphoreGive(DHT11Mutex01Handle);  //解锁
        vTaskDelay(10);
				continue;  
    }
	xQueueReceive(DHT11QueueHandle, &dht11_data, portMAX_DELAY);   //从队列中接受数据，一直接�?	
	lv_event_send(guider_ui.screen_btn_3, LV_EVENT_PRESSED, &dht11_data);
  xSemaphoreGive(DHT11Mutex01Handle);  //解锁    
  vTaskDelay(pdMS_TO_TICKS(1000));
  }
  /* USER CODE END Taskfunction_LCD */
}

/* USER CODE BEGIN Header_function_TOUCH */
/**
* @brief Function implementing the Task_TOUCH thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_function_TOUCH */
void function_TOUCH(void *argument)
{
  /* USER CODE BEGIN function_TOUCH */
  /* Infinite loop */
	xTimerStart(Timer_PeriodicHandle,0);
	setup_ui(&guider_ui);
  events_init(&guider_ui);
	
  for(;;)
  {
		xSemaphoreTake(handlerMutexHandle,portMAX_DELAY);  
    lv_task_handler();
    xSemaphoreGive(handlerMutexHandle);		
		custom_init(&guider_ui);
		vTaskDelay(10);
		tp_dev.scan(0);
    osDelay(5);
  }
  /* USER CODE END function_TOUCH */
}

/* USER CODE BEGIN Header_F_DHT11 */
/**
* @brief Function implementing the Task_DHT11 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_F_DHT11 */
void F_DHT11(void *argument)
{
  /* USER CODE BEGIN F_DHT11 */
  /* Infinite loop */
 float  dht11_data[2] = {0};
 float  temp,humi;
    /* 初始化DHT11 */
    //初始化队�?  队列深度�?5 
    while (1) {
        /* 每秒读取�?次温湿度传感�? */
      DHT11_READ_DATA(&temp, &humi);
      dht11_data[0] = temp;
      dht11_data[1] = humi;
      xSemaphoreTake(DHT11Mutex01Handle, portMAX_DELAY);  //上锁
      xQueueSend(DHT11QueueHandle, &dht11_data, portMAX_DELAY);   //向队列中发�?�数�?  
			xSemaphoreGive(DHT11Mutex01Handle);  //解锁
      //vTaskDelay(1000);
    }
  /* USER CODE END F_DHT11 */
}

/* USER CODE BEGIN Header_fuction_updata */
/**
* @brief Function implementing the Task_updata thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_fuction_updata */
void fuction_updata(void *argument)
{
  /* USER CODE BEGIN fuction_updata */
  /* Infinite loop */
  for(;;)
  {	

  }
  /* USER CODE END fuction_updata */
}

/* Callback01 function */
void Callback01(void *argument)
{
  /* USER CODE BEGIN Callback01 */
	
  /* USER CODE END Callback01 */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

