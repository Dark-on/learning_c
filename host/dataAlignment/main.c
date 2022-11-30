/*
 * main.c
 *
 *  Created on: 30 лист. 2022 р.
 *      Author: krps
 */

#include <stdio.h>
#include <stdint.h>


struct DataSet{
	char data1;
	int  data2;
	char data3;
	short data4;
};

struct twin1{
	uint8_t first;
	uint32_t second;
};

struct twin2{
	uint32_t first;
	uint8_t second;
};


void wait_for_user_input(void);
void print_dataStruct(struct DataSet);
void print_twin1Struct(const struct twin1 data);
void print_twin2Struct(const struct twin2 data);


int main(void){
	struct DataSet data00 = {0x11, 0xEF345678, 0x22, 0xABCD};
	struct DataSet data01;
	data01.data1 = 0x22;
	data01.data2 = 0x987654AB;
	data01.data3 = 0x44;
	data01.data4 = 0xEF0E;
	printf("Size of first twin = %u\n",  sizeof(struct twin1));
	printf("Size of second twin = %u\n", sizeof(struct twin2));
	struct twin1 some1 = {0x88, 0xEEEEFFFF};
	struct twin2 some2 = {0xEEEEFFFF, 0x88};
	print_twin1Struct(some1);
	print_twin2Struct(some2);
	print_dataStruct(data00);
	print_dataStruct(data01);

	wait_for_user_input();
	return 1;
}


void wait_for_user_input(void){
	printf("\nPress enter key to exit the application");
	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
}


void print_dataStruct(const struct DataSet data){
	uint8_t const *ptr = (uint8_t *) &data;
	uint8_t size = sizeof(data);
	printf("\nMemory address\tContent\n");
	printf("=================================\n");
	for(uint8_t i = 0; i < size; i++){
		printf("%p\t%X\n", ptr, *ptr);
		ptr++;
	}
	printf("Total memory consumed by this struct variable = %u\n\n", size);
}

void print_twin1Struct(const struct twin1 data){
	uint8_t const *ptr = (uint8_t *) &data;
	uint8_t size = sizeof(data);
	printf("\nMemory address\tContent\n");
	printf("=================================\n");
	for(uint8_t i = 0; i < size; i++){
		printf("%p\t%X\n", ptr, *ptr);
		ptr++;
	}
	printf("Total memory consumed by this struct variable = %u\n\n", size);
}

void print_twin2Struct(const struct twin2 data){
	uint8_t const *ptr = (uint8_t *) &data;
	uint8_t size = sizeof(data);
	printf("\nMemory address\tContent\n");
	printf("=================================\n");
	for(uint8_t i = 0; i < size; i++){
		printf("%p\t%X\n", ptr, *ptr);
		ptr++;
	}
	printf("Total memory consumed by this struct variable = %u\n\n", size);
}
