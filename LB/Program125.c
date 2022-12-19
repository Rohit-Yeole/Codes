#include<stdio.h>

int main()
{
    int i = 0;

    printf("___________________________________________________________\n");
    printf("ASCII Table\n");
    printf("___________________________________________________________\n");

    printf("Character\t Decimal\t Hex\t Octal\n");

    for(i = 0; i <=127; i++)
    {
        printf("%c \t %d \t %x \t %o\n",i,i,i,i);
    }

    printf("\n____________________________________________________________\n");

    return 0;
}