/*
 * main.c
 *
 *  Created on: 20 жовт. 2022 р.
 *      Author: krps
 *
 *  Before build exclude file "main.c" from build
 */

#include <stdio.h>


int main(void)
{
	float num1, num2, num3;
	printf("\nEnter three numbers: ");
	scanf("%f %f %f", &num1, &num2, &num3);
	printf("\nAverage: %0.2f\n", (num1 + num2 + num3) / 3);

	printf("\nPress enter key to exit the application \n");
	while(getchar() != '\n')
	{

	}
	getchar();
	return 1;

}
