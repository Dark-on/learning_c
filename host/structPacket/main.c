/*
 * main.c
 *
 *  Created on: 30 лист. 2022 р.
 *      Author: krps
 */


#include <stdio.h>
#include <stdint.h>


typedef struct{
	uint32_t crc      :2;
	uint32_t status   :1;
	uint32_t payload :12;
	uint32_t bat      :3;
	uint32_t sensor   :3;
	uint32_t longAddr :8;
	uint32_t shortAddr:2;
	uint32_t addrMode :1;
}Packet_t;


void wait_user_input(void);


int main(void){
	uint32_t data;
	printf("Enter the 32bit packet value:");
	scanf("%X", &data);
	Packet_t packet1;
	packet1.crc =      (uint8_t)(data & 0b11);
	packet1.status =   (uint8_t)((data >> 2) & 0b1);
	packet1.payload =  (uint16_t)((data >> 3) & 0xFFF);
	packet1.bat =      (uint8_t)((data >> 15) & 0b111);
	packet1.sensor =   (uint8_t)((data >> 18) & 0b111);
	packet1.longAddr = (uint8_t)((data >> 21) & 0xFF);
	packet1.shortAddr =(uint8_t)((data >> 29) & 0b11);
	packet1.addrMode = (uint8_t)((data >> 31) & 0b1);

	printf("crc       :%#X\n", packet1.crc);
	printf("status    :%#X\n", packet1.status);
	printf("payload   :%#X\n", packet1.payload);
	printf("bat       :%#X\n", packet1.bat);
	printf("sensor    :%#X\n", packet1.sensor);
	printf("longAddr  :%#X\n", packet1.longAddr);
	printf("shortAddr :%#X\n", packet1.shortAddr);
	printf("addrMode  :%#X\n", packet1.addrMode);
	printf("Size = %u", sizeof(packet1));
	wait_user_input();
	return 1;
}


void wait_user_input(void){
	printf("\nPress enter key to exit the application");
	while(getchar() != '\n'){
		// wait for user input
	}
	getchar();
}
