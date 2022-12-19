#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 3.14;
    double d = 7.648;

    printf("Values from each variable :\n");
    printf("%c\n",ch);
    printf("%d\n",i);
    printf("%f\n",f);
    printf("%lf\n",d);

    printf("Size of each variable :\n");
    printf("size of character is :%d\n",sizeof(ch));
    printf("size of integer is :%d\n",sizeof(i));
    printf("size of float is :%d\n",sizeof(f));
    printf("size of double is :%d\n",sizeof(d));
    
    printf("Address of each variable\n");
    printf("address of character :%p\n",&ch);
    printf("address of integer :%p\n",&i);
    printf("address of float :%p\n",&f);
    printf("address of double :%p\n",&d);

    return 0;
}