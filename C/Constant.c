#include<stdio.h>

int main()
{
    int no1 = 10;
    const int no2 = 11;

    printf("Value of no1 is : %d\n",no1);
    printf("Value of no2 is : %d\n",no2);

    no1++;              //Allowed 
    no2++;              //NOT Allowed           

    no1 = 20;           //A
    no2 = 20;           //NA

    no1--;              //A
    no2--;              //NA

    return 0;
}