#include <stdio.h>

void myFunc(void);

int myGlobalVar;
int myVar = 11;

int main()
{
    int myLocalVar;
    
    myLocalVar = 100;
    myGlobalVar = 1000;
    printf("001 Value of LOCAL variable  = %d\n", myLocalVar);
    printf("011 Value of GLOBAL variable = %d\n\n", myGlobalVar);
    myFunc();
    printf("----after calling myFunc------------\n");
    printf("003 Value of LOCAL variable  = %d\n", myLocalVar);
    printf("013 Value of GLOBAL variable = %d\n\n", myGlobalVar);
    
    //==============================
    printf("----before block--------------------\n");
    int myVar1 = 10;
    // next line give error cause definition variable of same name in one score
    //char myVar1 = 1;
    
    int myVar2 = 20;
    
    printf("021 myVar2 = %d\n\n", myVar2);
    
    {
        printf("----in block------------------------\n");
        int myVar1 = 15;
        myVar2 = 22;
        printf("022 myVar2 = %d\n\n", myVar2);
    }
    
    printf("----after block---------------------\n");
    printf("023 myVar2 = %d\n\n", myVar2);
    
    /* 10 will be printed cause the first preference is always given to the 
       local space, if the variable names are same.*/
    printf("myVar1 = %d\n", myVar1);
  
    return 0;
}

void myFunc(void)
{
    printf("----in myFunc-----------------------\n");
    // next line give error: ‘myLocalVar’ undeclared (first use in this function)
    // myLocalVar = 200; 
    myGlobalVar = 2000;
    printf("012 Value of GLOBAL variable = %d\n\n", myGlobalVar);
}
