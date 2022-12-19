// logic issue waali file

#include<stdio.h>

int CountFrequency(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;
    char cValue = '\0';

    printf("Please enter string\n");
    scanf("%[^\n]s",Arr);

    printf("Please enter the character\n");
    scanf("%c",&cValue);

    iRet = CountFrequency(Arr, cValue);

    printf("Frequency of %c is : %d\n",cValue,iRet);

    return 0;
}