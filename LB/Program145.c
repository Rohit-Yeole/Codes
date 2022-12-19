#include<stdio.h>
#include<stdbool.h>

bool Check(char *str, char ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[10];
    bool bRet = false;
    char cValue = '\0';

    printf("Please enter string\n");
    scanf("%[^\n]s",Arr);

    printf("Please enter the character\n");
    scanf(" %c",&cValue);

    bRet = Check(Arr, cValue);

    if(bRet == true)
    {
        printf("Character is present in the string \n");
    }
    else
    {
        printf("Character is not present in the string \n");
    }
    
    return 0;
}