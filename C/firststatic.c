#include<stdio.h>

// Variable Declaration //No1 is global variable which is external to this file
extern int No1;
// Variable Declaration //No2 is global variable which is external to this file
extern int No2;
// Function Declaration // Demo is a function which accepts nothing and which returns nothing is external to this file
extern void Demo();    

int main()
{
    Demo();         // Function call

    printf("value of No1 : %d\n",No1);
    printf("value of No2 : %d\n",No2);
    

    return 0;
}