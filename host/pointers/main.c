/*
 * main.c
 *
 *  Created on: 20 жовт. 2022 р.
 *      Author: krps

	1. Create a char type variable and initialize it to value 100
	2. Print the address of the above variable.
	3. Create a pointer variable and store the address of the above variable
	4. Perform read operation on the pointer variable to fetch 1 byte of data from the pointer
	5. Print the data obtained from the read operation on the pointer.
	6. Perform write operation on the pointer to store the value 65
	7. Print the value of the variable defined in step 1
*/

#include <stdio.h>

int main()
{
	char var = 100;
	printf("The address of the variable = %p\n", &var);
	char* pAddress = &var;
	char value = *pAddress;
	printf("The data obtained from the read operation = %d\n", value);
	*pAddress = 65;
	printf("The value of the variable = %d\n", var);

	return 1;
}

