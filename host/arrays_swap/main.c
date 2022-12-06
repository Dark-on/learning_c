#include <stdio.h>
#include <stdint.h>


void array_print(int const * const pArray, uint32_t const arrayLen);
void wait_user_input(void);
void array_scan(int *const pArray, uint32_t const arrayLen);


int main(void){
	uint32_t lenArray1, lenArray2;
	printf("Array swapping program\n");
	printf("Enter amount of elements of Array-1 and Array-2:");
	scanf("%u %u", &lenArray1, &lenArray2);

	int array1[lenArray1];
	int array2[lenArray2];

	array_scan(array1, lenArray1);
	array_scan(array2, lenArray2);

	printf("Contents of array before swap\n");
	array_print(array1, lenArray1);
	array_print(array2, lenArray2);

	uint32_t const smallLen = lenArray1 < lenArray2 ? lenArray1 : lenArray2;
	uint8_t temp;
	for(uint8_t i = 0; i < smallLen; i ++){
		temp = array1[i];
		array1[i] = array2[i];
		array2[i] = temp;
	}

	printf("Contents of array after swap\n");
	array_print(array1, lenArray1);
	array_print(array2, lenArray2);

	wait_user_input();
	return 1;
}


void array_scan(int *const pArray, uint32_t const arrayLen){
	uint32_t static arrayNumber = 1;
	for(uint8_t i = 0; i < arrayLen; i++){
		printf("\nEnter element %u of Array-%u:", i, arrayNumber);
		scanf("%d", pArray + i);
	}
	arrayNumber++;
}


void array_print(int const * const pArray, uint32_t const arrayLen){
	for(uint8_t i = 0; i < arrayLen; i++){
		printf("%d\t", pArray[i]);
	}
	printf("\n");
}

void wait_user_input(void){
	printf("\nPress enter key to exit the application");
	while(getchar() != '\n'){
		// wait for user input
	}
	getchar();
}


