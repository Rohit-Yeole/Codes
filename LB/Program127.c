#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    if((ch >= 97) && (ch <= 122))
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

    bret = CheckSmall(cValue);

    if(bret == true)
    {
        printf("%c is a small case letter\n",cValue);
    }
    else
    {
        printf("%c is not a small case letter\n",cValue);
    }

    return 0;
}