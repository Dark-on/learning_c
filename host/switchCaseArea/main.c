/*
 * main.c
 *
 *  Created on: 21 жовт. 2022 р.
 *      Author: krps
 */

#include <stdio.h>


void wait_for_user_input(void);


int main(void){
	char code;
	float area;
	float radius = 1, base = 1, height = 1, side = 1, base1 = 1, base2 = 1;

	printf("Area calculation program\n");
	printf("Circle   --> c\n");
	printf("Triangle --> t\n");
	printf("Rectangle--> r\n");
	printf("Square   --> s\n");
	printf("Trapezoid--> z\n");
	printf("Enter the code here: ");

	scanf("%c", &code);

	switch (code)
	{
	case 'c':
		printf("\nCircle area calculation");

		printf("\nEnter the radius (r) value: ");
		scanf("%f", &radius);
		area = 3.14 * radius *radius;
		break;
	case 't':
		printf("\nTriangle area calculation");

		printf("\nEnter the base (b) value: ");
		scanf("%f", &base);
		printf("\nEnter the height (h) value: ");
		scanf("%f", &height);
		area = base * height / 2;
		break;
	case 'r':
		printf("\nRectangle area calculation\n");

		printf("\nEnter the base (b) value: ");
		scanf("%f", &base);
		printf("\nEnter the height (h) value: ");
		scanf("%f", &height);
		area = base * height;
		break;
	case 's':
		printf("\nSquare area calculation\n");

		printf("\nEnter the side (a) value: ");
		scanf("%f", &side);
		area = side * side;
		break;
	case 'z':
		printf("\nTrapezoid area calculation\n");

		printf("\nEnter first base (a) value: ");
		scanf("%f", &base1);
		printf("\nEnter second base (b) value: ");
		scanf("%f", &base2);
		printf("\nEnter the height (h) value: ");
		scanf("%f", &height);
		area = (base1 + base2) * height / 2;
		break;
	default:
		printf("Invalid input! Exiting...");
		wait_for_user_input();
		return 0;
	}
	if ((radius <= 0) || (base <= 0) || (height <= 0) || (side <= 0) || (base1 <= 0) || (base2 <= 0)){
		printf("Values cannot be negative. Exiting...");
		wait_for_user_input();
		return 0;
	}
	printf("Area = %0.2f", area);

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
