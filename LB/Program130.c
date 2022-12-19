#include<stdio.h>
#include<stdbool.h>

bool IsDigit(char ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bret = false;

    printf("Enter one character\n");
    scanf("%c",&cValue);

    bret = IsDigit(cValue);

    if(bret == true)
    {
        printf("%c is a digit\n",cValue);
    }
    else
    {
        printf("%c is not a digit\n",cValue);
    }

    return 0;
}