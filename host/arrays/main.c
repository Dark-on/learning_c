#include <stdio.h>
#include <stdint.h>


void array_print(uint8_t const * const pArray, uint32_t const arrayLen);


int main(void){

	uint32_t studentsAge[100];
	printf("Size of array is %u\n", sizeof(studentsAge));
	printf("Base address of the array is %p\n", studentsAge);

	uint8_t someData[10] = {0xff, 0xff, 0xff};
	printf("2nd data item (before) = %x\n", *(someData + 1));
	printf("3rd data item (before) = %x\n", someData[2]);

	*(someData + 1) = 0x9b;
	someData[1] = 0x9b;

	printf("2nd data item (after) = %x\n", *(someData + 1));
	printf("3rd data item (after) = %x\n", someData[2]);

	printf("\nAll values of array (before):\n");
	for(uint8_t i = 0; i < 10; i++){
		printf("%x\t", someData[i]);
	}

	someData[7] = 0x33;

	printf("\nAll values of array (after):\n");
	array_print(someData, 10);

	return 1;
}


void array_print(uint8_t const * const pArray, uint32_t const arrayLen){
	for(uint8_t i = 0; i < arrayLen; i++){
		printf("%x\t", pArray[i]);
	}
}
