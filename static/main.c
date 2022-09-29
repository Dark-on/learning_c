#include <stdio.h>
#include "file1.c"

void file1_func(void);

int privateData;

int main()
{
    privateData = 100;
    printf("Value of privateData = %d\n", privateData);
    file1_func();
    printf("Value of privateData = %d\n", privateData);

    return 0;
}