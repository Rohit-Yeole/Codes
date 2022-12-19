#include<stdio.h>
#include<stdbool.h>

bool IsCapitalX(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bret = IsCapitalX(cValue);

    if(bret == true)
    {
        printf("%c is a capital case letter\n",cValue);
    }
    else
    {
        printf("%c is not a capital case letter\n",cValue);
    }

    return 0;
}