#include<stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your Full Name\n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s",Arr);

    return 0;
}