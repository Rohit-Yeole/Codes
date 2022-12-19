// Problem Statement : Display Table of a number till multiples 10
#include<stdio.h>

void DisplayTable(int iNo)
{
    int iCnt = 0; 
    int iAns = 0;  

    printf("Table of %d is : \n",iNo);
    printf("------------------------------------\n");
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iAns = iNo * iCnt;
        printf("%d\n",iAns);
    }
    printf("\n------------------------------------\n");                      
}

int main()
{
    int iValue = 0;
    
    printf("Enter the value : \n");
    scanf("%d",&iValue); 

    DisplayTable(iValue);

    return 0;
}