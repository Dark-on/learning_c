/*
 * main.c
 *
 *  Created on: 21 жовт. 2022 р.
 *      Author: krps
 */

#include <stdio.h>


void wait_for_user_input(void);


int main(void)
{
	float income, tax;
	printf("Enter your total income: $");
	if(! scanf("%f", &income)){
		printf("Invalid input! Exiting...");
		wait_for_user_input();
		return 0;
	}
	if (income < 0){
		printf("Income cannot be negative. Exiting...");
		wait_for_user_input();
		return 0;
	}

	if (income < 9526){
		tax = 0;
	} else if (income < 38701){
		tax = income * 0.12;
	} else if (income < 82501){
		tax = income * 0.22;
	} else{
		tax = income * 0.32 + 1000;
	}

	printf("Tax payable: $%0.2f", tax);

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
