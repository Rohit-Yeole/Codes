// Display Reverse

#include<stdio.h>
#include<stdlib.h>

void DisplayReverse(int Arr[], int iSize)
{
    int iCnt = 0; 

    for(iCnt = iSize-1; iCnt >= 0; iCnt--)     // Time Complexity is N
    {
        printf("%d\n",Arr[iCnt]);
    }
    
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);
    
    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Elements in reverse order is : \n");

    DisplayReverse(ptr, iLength);

    free(ptr);

    return 0;
}