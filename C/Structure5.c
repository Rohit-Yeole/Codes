#include<stdio.h>

struct Demo
{
    int no;
    float f;
};

int main()
{
    struct Demo Arr[3];

    Arr[0].no = 11;
    Arr[0].f = 10.67;

    Arr[1].no = 21;
    Arr[1].f = 20.59;

    Arr[2].no = 51;
    Arr[2].f = 90.34;

    printf("Size of Array is : %d\n",sizeof(Arr));
    printf("Size of Structure is : %d\n",sizeof(struct Demo));
    printf("Value of First element of Structure is : %d\n",Arr[0].no);

    return 0;
}