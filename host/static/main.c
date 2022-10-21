#include <stdio.h>
#include "file1.c"

void file1_func(void);

int notPrivateData;
static int privateData;

int main()
{
    notPrivateData = 100;
    privateData = 100;
    printf("Value of notPrivateData = %d\n", notPrivateData);
    printf("Value of privateData = %d\n\n", privateData);
    
    file1_func();
    
    printf("Value of notPrivateData = %d\n", notPrivateData);
    printf("Value of privateData = %d\n", privateData);

    return 1;
}
