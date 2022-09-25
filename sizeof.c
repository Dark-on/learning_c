#include <stdio.h>

int main()
{
    long long myLongHistory = 900;
    
    char size = sizeof(myLongHistory);
    
    printf("Size of char data type  = %lu byte\n", sizeof(char));
    printf("Size of short data type = %lu byte\n", sizeof(short));
    printf("Size of int data type   = %lu byte\n", sizeof(int));
    printf("Size of long data type  = %lu byte\n", sizeof(long));
    printf("Size of long long data type = %lu byte\n\n", sizeof(long long));
    
    printf("Size of long long variable = %lu byte\n", size);

    return 0;
}
