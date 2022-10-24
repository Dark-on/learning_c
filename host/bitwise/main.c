/*
 * main.c
 *
 *  Created on: 24 жовт. 2022 р.
 *      Author: krps
 */

#include <stdio.h>
#include <stdint.h>


void wait_for_user_input(void);
void parity_check(int number);


int main(){
	int32_t num1, num2;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);

	printf("\n%d & %d = %d", num1, num2, num1 & num2);
	printf("\n%d | %d = %d", num1, num2, num1 | num2);
	printf("\n%d ^ %d = %d", num1, num2, num1 ^ num2);
	printf("\n~%d     = %d", num1, ~num1);
	printf("\n~%d     = %d", num2, ~num2);

	printf("\n--------------\n");
	parity_check(num1);
	parity_check(num2);
	num1 |= (1 << 3) + (1 << 6); // set 4th and 7th bits
	num2 |= (1 << 3) + (1 << 6); // set 4th and 7th bits
	printf("After setting = %d\n", num1);
	printf("After setting = %d\n", num2);


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


void parity_check(int32_t number){
	(number & 1) ? printf("%d is odd\n", number) : printf("%d is even\n", number);
}
