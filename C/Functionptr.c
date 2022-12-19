#include<stdio.h>

void fun()
{
    printf("Inside fun\n");
}

int addition(int no1, int no2)
{
    int ans = 0;
    ans = no1 + no2;
    return ans;
}


int main()
{
    int ret;
    fun();

    void (*fptr)();

    fptr = fun;

    fptr();

    int (*fptr1)(int,int);

    fptr1 = addition;

    ret = addition(10,11);
    printf("Addition is :%d\n",ret);

    ret = fptr1(10,11);
    printf("Addition is :%d\n",ret);

    return 0;
}