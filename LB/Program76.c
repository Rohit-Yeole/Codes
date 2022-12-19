// Accept N numbers from user and display count Even,odd numbers from that numbers

#include<stdio.h>
#include<stdlib.h>
      
void DisplayEvenOddCount(int Arr[], int iSize)         
{
    int iEvenCnt = 0, iCnt = 0, iOddCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }
    printf("Number of Even Numbers are : %d\n",iEvenCnt);      
    printf("Number of Odd Numbers are : %d\n",iOddCnt);      
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
    
    DisplayEvenOddCount(ptr, iLength);       

    free(ptr);

    return 0;
}