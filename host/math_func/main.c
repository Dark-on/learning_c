#include <stdio.h>
#include "math.h"

int main()
{
    printf("0x0FFF1111 + 0x0FFF1111 = %X\n", add(0x0FFF1111, 0x0FFF1111));
    printf("100 + 20 = %d\n", add(100, 20));
    printf("0x0FFF1111 - 0x0FF01111 = %X\n", sub(0x0FFF1111, 0x05F01091));
    printf("100 - 20 = %d\n", sub(100, 20));
    printf("0x0FFF1111 * 0x0FFF1111 = %I64X\n", mul(0x0FFF1111, 0x0FFF1111));
    printf("1999 * 2999 = %I64d\n", mul(1999, 2999));
    printf("100 / 20 = %0.2f\n", div(100, 20));
    printf("\n\nFinish\n\n");
    return 0;
}
