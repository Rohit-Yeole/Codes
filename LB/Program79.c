// Check Whether the specific number is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
      
bool CheckOccurence(int Arr[], int iSize, int iNo)         
{
    int iFrequency = 0, iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    if(iFrequency == 0)
    {
        return false;
    }
    else
    {
        return true;
    }      
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, iValue = 0;
    int i = 0; 
    bool bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");

    for(i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the occurence : \n");
    scanf("%d",&iValue);
    
    bRet = CheckOccurence(ptr, iLength, iValue);       
    if(bRet == true)
    {
        printf("%d is occured in array\n",iValue);
    }
    else
    {
        printf("There is no %d in array\n",iValue);
    }
    
    free(ptr);

    return 0;
}