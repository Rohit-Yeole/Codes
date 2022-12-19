#include<stdio.h>

int main()
{
    float arr[] = {10.3,43.4,45.34,234.45};
    void *p = &(arr[2]);
    void *q = arr;
    

    printf("%d",p-q);

    return 0;
}