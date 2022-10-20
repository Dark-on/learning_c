/*
 * main.c
 *
 *  Created on: 20 жовт. 2022 р.
 *      Author: krps
 */

#include <stdio.h>
#include <stdint.h>


int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%u", &age);
	if (age < 18){
		printf("\nSorry. You can't cast a vote.");
	}else{
		printf("\nCongratulations! You can cast a vote.");
	}

	printf("\nPress enter key to exit the application");
	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();

	return 0;
}
