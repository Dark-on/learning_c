/*
 * main.c
 *
 *  Created on: 20 жовт. 2022 р.
 *      Author: krps
 */

#include  <stdio.h>

int main()
{
	double charge, chargeE;
	printf("Enter the charge: ");
	scanf("%lf", &charge);
	printf("Enter the charge of an electron: ");
	scanf("%le", &chargeE);
	printf("\nTotal number of electrons = %le", charge / chargeE);
	printf("\nTotal number of electrons = %lf", charge / chargeE);

	printf("\nPress enter key to exit the application \n");
	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
	return 1;
}


