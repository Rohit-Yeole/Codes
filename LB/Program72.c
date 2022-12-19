// Accept N numbers from user and perform Average on that numbers

#include<stdio.h>
#include<stdlib.h>

// float Average(int *Arr, int iSize)       // pointer representation for array
float Average(int Arr[], int iSize)         // subscript operator
{
    int iSum = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return (iSum / iSize);      // (150 / 5)    30.00
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0; 
    float fRet = 0.0f;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));
    // ptr = (int *)malloc(5 * 4);

    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    // printf("Elements are : \n");
    // for(i = 0; i < iLength; i++)
    // {
    //     printf("%d\n",ptr[i]);
    // }
    // fRet = Average(500, 5);
    fRet = Average(ptr, iLength);       // Call by Address for 1st parameter and call by value for 2nd parameter

    printf("Average is : %f\n",fRet);

    free(ptr);

    return 0;
}