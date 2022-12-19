#include<stdio.h>

struct Demo
{
    int i;
    float f;
    double d;
};

union Hello
{
    int i;
    float f;
    double d;
};

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Size of Structure is : %d\n",sizeof(dobj));
    printf("Size of Union is : %d\n",sizeof(hobj));

    dobj.i = 11;
    dobj.f = 10.9;
    dobj.d = 90.56;

    //hobj.i = 21;
    hobj.d = 11.9;

    //printf("%d\n",dobj.i);
    //printf("%f\n",dobj.f);
    //printf("%d\n",hobj.i);
    printf("%f\n",hobj.f);
    printf("%f\n",hobj.d);

    return 0;
}