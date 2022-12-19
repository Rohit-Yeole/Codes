// Accept N numbers from user and display sum of Even and odd numbers from that numbers

#include<stdio.h>
#include<stdlib.h>
      
void DisplayEvenOddSum(int Arr[], int iSize)         
{
    int iEvenCnt = 0, iCnt = 0, iEvenSum = 0, iOddSum = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum + Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum + Arr[iCnt];
        }
    }
    printf("Sum of Even Numbers are : %d\n",iEvenSum);      
    printf("Sum of Odd Numbers are : %d\n",iOddSum);      
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0; 
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    DisplayEvenOddSum(ptr, iLength);       

    free(ptr);

    return 0;
}