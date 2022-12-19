// Check Whether the specific number is present at first occurance or not 

#include<stdio.h>
#include<stdlib.h>
      
int CheckOccurence(int Arr[], int iSize, int iNo)         
{
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }      
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

    printf("Enter the element to findout the index of first occurence : \n");
    scanf("%d",&iValue);
    
    iRet = CheckOccurence(ptr, iLength, iValue);       
    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);    
    }
    else
    {
        printf("%d is occured in array at index %d \n",iValue,iRet);
    }
    
    free(ptr);

    return 0;
}