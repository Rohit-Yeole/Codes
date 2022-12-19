#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];                             // Static memory allocation

    int *p = NULL;

    p = (int *)malloc(sizeof(int) * 5);     // dynamic memory allocation

    // use the memory

    free(p);             // memory of p gets deallocate at this point

    // code 

    return 0;           // memory of Arr gets deallocate at this point
}