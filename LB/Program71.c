// Accept N numbers from user and perform addition on that numbers

#include<stdio.h>
#include<stdlib.h>

int Addition(int *Data,int iSize)
{
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Data[iCnt];
    }
    
    return iSum;
}

int main()
{

    int iLength = 0;
    int *ptr = NULL;
    int iRet = 0;
    int iCnt = 0;

    printf("Enter number of elements you want to store : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Elements from array are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Addition(ptr,iLength);

    printf("Summation of elements is : %d\n",iRet);

    free(ptr);

    return 0;
}