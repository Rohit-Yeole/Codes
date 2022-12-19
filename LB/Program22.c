#include<stdio.h>

void Display(int iValue)
{   
    register int iCnt = 0;
    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("Marvellous : %d\n",iCnt);
    }
}

int main()
{
    int iNo1 = 0;
    printf("Please enter the number of iteration\n");
    scanf("%d",&iNo1);

    Display(iNo1);

    return 0;
}