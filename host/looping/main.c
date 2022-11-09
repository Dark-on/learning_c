/*
 * main.c
 *
 *  Created on: 25 жовт. 2022 р.
 *      Author: krps
 */

#include <stdio.h>
#include <stdint.h>


void wait_for_user_input(void);


int main(){
	// 1. print from 1 to 10
	uint8_t i = 1;
	while (i <= 10)
		printf("%d\n", i++);

	// 2. print all even numbers in inputed boarders
	int32_t start, end;
	uint32_t amountA = 0, amountB = 0;
	printf("Enter boarders (two integer numbers): ");
	scanf("%d %d", &start, &end);
	if (start >= end){
		printf("Ending number should be > starting number");
		wait_for_user_input();
		return 0;
	}

	if (start & 1)
		start ++;

	// a. using while
	int32_t startA = start, endA = end;
	printf("\nEven numbers are:\n");
	while (startA <= endA)
	{
		printf("%4d\t", startA);
		startA += 2;
		amountA ++;

	}
	printf("\nTotal amount of even numbers: %d", amountA);

	// b. using for
	int32_t startB = start, endB = end;
	for (printf("\nEven numbers are:\n") ; startB <= endB; startB += 2)
	{
		printf("%4d\t", startB);
		amountB ++;
	}
	printf("\nTotal amount of even numbers: %d", amountB);

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
