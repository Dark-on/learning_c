/*
 * main.c
 *
 *  Created on: 25 жовт. 2022 р.
 *      Author: krps
 */

#include <stdio.h>
#include <stdint.h>


int main(){

	int16_t data = 0xFFFF;
	// read [9:14] bits
	int8_t temp = (int8_t) ((data >> 9) & 0b111111);
	printf("%d", temp);
	return 1;
}

