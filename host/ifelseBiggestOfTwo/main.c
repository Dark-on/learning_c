/*
 * main.c
 *
 *  Created on: 21 жовт. 2022 р.
 *      Author: krps
 */

#include <stdio.h>

void wait_for_user_input(void);


int main()
{
	float num1f, num2f;

	printf("\nEnter first number (integer): ");
	if ( ! scanf("%f", &num1f) ){
		printf("Invalid input! Exiting...");
		wait_for_user_input();
		return 0;
	}
	printf("\nEnter second number (integer): ");
	if ( ! scanf("%f", &num2f) ){
		printf("Invalid input! Exiting...");
		wait_for_user_input();
		return 0;
	}

	int num1, num2;
	// we are storing only integer parts of the numbers
	num1 = num1f;
	num2 = num2f;
	if ((num1 != num1f) || (num2 != num2f))
		printf("\nWarning! Comparing only integer parts");

	if (num1 > num2){
		printf("\nThe biggest is %d", num1);
	}else{
		if (num2 > num1){
			printf("\nThe biggest is %d", num2);
		}else{
			printf("\nBoth numbers are equal\n");
		}
	}
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
