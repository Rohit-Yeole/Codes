// Calculate frequency of specific number

#include<stdio.h>
#include<stdlib.h>
      
int CalculateFrequency(int Arr[], int iSize, int iNo)         
{
    int iFrequency = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;      
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iValue = 0;
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

    printf("Enter the element to findout the frequency : \n");
    scanf("%d",&iValue);
    
    iRet = CalculateFrequency(ptr, iLength, iValue);       

    printf("Frequency of %d is : %d\n",iValue,iRet);

    free(ptr);

    return 0;
}