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
	int32_t height;
	printf("Enter the height of pyramid:");
	scanf("%d", &height);

	if (height < 0){
		printf("Height should be bigger than 0\n");
		wait_for_user_input();
		return 0;
	}



	printf("\n");
	for (uint16_t i = 1; i <= height; i++, printf("\n")){
		for (uint16_t j = i; j > 0; j--){
			printf("%4d\t", j);
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
