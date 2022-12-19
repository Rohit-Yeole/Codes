#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p = NULL;
    // int *q = NULL;

    p = (int *)malloc(sizeof(int) * 10);

    // Use the memory

    p = (int *)realloc(p,sizeof(int) * 15);
    // or q = (int *)realloc(p,sizeof(int) * 15);

    // Use the memory

    free(p);

    return 0;
}