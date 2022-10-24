/*
 * main.c
 *
 *  Created on: 24 жовт. 2022 р.
 *      Author: krps
 */

#include <stdio.h>


void wait_for_user_input(void);


int main(){
	int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("\n%d & %d = %d", num1, num2, num1 & num2);
	printf("\n%d | %d = %d", num1, num2, num1 | num2);
	printf("\n%d ^ %d = %d", num1, num2, num1 ^ num2);
	printf("\n~%d     = %d", num1, ~num1);
	printf("\n~%d     = %d", num2, ~num2);

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
