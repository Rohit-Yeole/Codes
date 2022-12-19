#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};

    printf("Address of array :%p\n",Arr);
    printf("Address of array :%p\n",&Arr);
    printf("Size of array :%d\n",sizeof(Arr));

    return 0;
}