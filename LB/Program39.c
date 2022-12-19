// Problem Statement : Accept number from user and Display Numbers in reverse order
#include<stdio.h>

void DisplayReverse(int iNo)
{
    int iCnt = 0; 

    printf("------------------------------------\n");

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n-------------------------------------\n");                      
}

int main()
{
    int iValue = 0;
    
    printf("Enter the value : \n");
    scanf("%d",&iValue); 

    DisplayReverse(iValue);

    return 0;
}