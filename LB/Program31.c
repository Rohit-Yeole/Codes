// Problem Statement : Display factors of a number
#include<stdio.h>

//  O(N)  -> Time Complexity
void DisplayFactors(int iNo)
{
    int iCnt = 0;

    printf("Factors are : \n");    
//          1           2          3
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)        // 4
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

    DisplayFactors(iValue);

    return 0;
}