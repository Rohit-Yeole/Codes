// Problem Statement : Display Non-factors of a number
#include<stdio.h>
    
void DisplayNonFactors(int iNo)
{
    int iCnt = 0;

    printf("Non-Factors of %d are : \n",iNo);    
//          1           2          3
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)        // 4
        {
            printf("%d\n",iCnt);
        }
    }                    
}

int main()
{
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue); 

    DisplayNonFactors(iValue);

    return 0;
}