/*
 * main.c
 *
 *  Created on: 20 жовт. 2022 р.
 *      Author: krps
 */

#include <stdio.h>

int main()
{
	char c1, c2, c3, c4, c5, c6;
	printf("\nEnter 6 characters of your choice: ");
	scanf("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);
	printf("\nASCII codes: %d, %d, %d, %d, %d, %d", c1, c2, c3, c4, c5, c6);

	printf("\nPress enter key to exit the application");
	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
	return 0;
}
