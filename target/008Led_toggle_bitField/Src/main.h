/*
 * main.h
 *
 *  Created on: 2 груд. 2022 р.
 *      Author: krps
 */

#ifndef MAIN_H_
#define MAIN_H_

struct RCC_AHB2_ENR{
	uint32_t gpioa_en :1;
	uint32_t gpiob_en :1;
	uint32_t gpioc_en :1;
	uint32_t gpiod_en :1;
	uint32_t gpioe_en :1;
	uint32_t reserved :2;
	uint32_t gpioh_en :1;
	uint32_t reserved0 :5;
	uint32_t adc_en   :1;
	uint32_t reserved1 :2;
	uint32_t aes_en   :1;
	uint32_t reserved2 :1;
	uint32_t rng_en   :1;
};

struct GPIOx_REGS{
	struct{
		uint32_t pin0 :2;
		uint32_t pin1 :2;
		uint32_t pin2 :2;
		uint32_t pin3 :2;
		uint32_t pin4 :2;
		uint32_t pin5 :2;
		uint32_t pin6 :2;
		uint32_t pin7 :2;
		uint32_t pin8 :2;
		uint32_t pin9 :2;
		uint32_t pin10 :2;
		uint32_t pin11 :2;
		uint32_t pin12 :2;
		uint32_t volatile pin13 :2;
		uint32_t pin14 :2;
		uint32_t pin15 :2;
	}mode;
	uint32_t output_type;
	uint32_t output_speed;
	uint32_t pull_up_down;
	uint32_t input_data;
	struct{
		uint32_t pin0 :1;
		uint32_t pin1 :1;
		uint32_t pin2 :1;
		uint32_t pin3 :1;
		uint32_t pin4 :1;
		uint32_t pin5 :1;
		uint32_t pin6 :1;
		uint32_t pin7 :1;
		uint32_t pin8 :1;
		uint32_t pin9 :1;
		uint32_t pin10 :1;
		uint32_t pin11 :1;
		uint32_t pin12 :1;
		uint32_t volatile pin13 :1;
		uint32_t pin14 :1;
		uint32_t pin15 :1;
	}output_data;
	uint32_t bit_set_reset;
	uint32_t lckr;
	uint32_t afrl;
	uint32_t afrh;
	uint32_t bit_reset;
};

#endif /* MAIN_H_ */
