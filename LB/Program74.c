// Accept N numbers from user and count Even numbers from that numbers

#include<stdio.h>
#include<stdlib.h>
      
int CountEven(int Arr[], int iSize)         
{
    int iEvenCnt = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;      
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
    
    iRet = CountEven(ptr, iLength);       

    printf("Number of Even numbers are : %d\n",iRet);

    free(ptr);

    return 0;
}