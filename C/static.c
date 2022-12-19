#include<stdio.h>

void Demo()
{
    auto int A = 10;
    A++;
    printf("Value of Demo is : %d\n",A);
}
void Hello()
{
    static int B = 10;
    B++;
    printf("Value of Hello is : %d\n",B);
}

int main()
{
    Demo();
    Demo();
    Demo();


    Hello();
    Hello();
    Hello();

    return 0;
}