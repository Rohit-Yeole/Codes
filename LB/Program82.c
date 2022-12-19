// Accept N number from user and find Maximum from that numbers

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)       // 5
{
    int iCnt = 0;
    int iMax = Arr[0];      // pahila element la initialise kelay yachya mule positive and negative input pn chalta 

    for(iCnt = 0; iCnt < iSize; iCnt++)     // Time Complexity is N
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    printf("Enter the number of elements : \n");    // Step 1
    scanf("%d",&iLength);
    
    ptr = (int *)malloc(iLength * sizeof(int));     // 2

    printf("Enter the elements : \n");      // 3

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Maximum(ptr, iLength);       // 4

    printf("Maximum number is : %d\n",iRet);    // 6

    free(ptr);

    return 0;
}