#include <stdio.h>

int main()
{
    unsigned char distanceAB;
    unsigned char distanceBC;
    unsigned char distanceAC;
    
    distanceAB = 160;
    distanceBC = 40;
    distanceAC = distanceAB + distanceBC;
    printf("Total distance from A2C is %u km", distanceAC);

    return 0;
}
