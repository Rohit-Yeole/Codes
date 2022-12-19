// Check Whether the specific number is present at last occurance or not 

#include<stdio.h>
#include<stdlib.h>
      
int CheckLastOccurence(int Arr[], int iSize, int iNo)         
{
    int iCnt = 0;
    for(iCnt = iSize-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;      
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

    printf("Enter the element to findout the index of last occurence : \n");
    scanf("%d",&iValue);
    
    iRet = CheckLastOccurence(ptr, iLength, iValue);       
    if(iRet == -1)
    {
        printf("There is no %d in the array\n",iValue);    
    }
    else
    {
        printf("%d is last occured in array at index %d \n",iValue,iRet);
    }
    
    free(ptr);

    return 0;
}