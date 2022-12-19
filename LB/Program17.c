// Demonstration of iteration using for loop

#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Jay ganesh...\n");
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number of iterations : \n");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}