/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdio.h>

extern void initialise_monitor_handles(void);

// will be writed to SRAM1 with base address 0x2000 0000 (volatile)
int g_data1 = -4000;
int g_data2 = 200;
int result = 0;



int main(void)
{
	initialise_monitor_handles();
	result = g_data1 + g_data2;
	printf("Result = %d\n", result);
	for(;;);
}
