#include <stdio.h>

int main()
{
    char a1 = 'A';
    char a2 = 'B';
    char a3 = 'C';
    char a4 = 'D';
    char a5 = 'E';
    char a6 = 'F';
    printf("Address of variable a1 = %p\n", &a1);
    printf("Address of variable a2 = %p\n", &a2);
    printf("Address of variable a3 = %p\n", &a3);
    printf("Address of variable a4 = %p\n", &a4);
    printf("Address of variable a5 = %p\n", &a5);
    printf("Address of variable a6 = %p\n\n", &a6);
    
    unsigned long long int address_off_a1 = (unsigned long long int) &a1;
    printf("Address of variable a1 = %llx\n", address_off_a1);

    return 0;
}
