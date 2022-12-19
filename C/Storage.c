#include<stdio.h>

int A = 10;

void Fun()                        //Function Defination
{
    auto int B = 20;
    register int D = 20;
    static int E = 20;

    B++;                         // Increment values by 1 
    D++;
    E++;

    printf("Value of auto variable : %d\n", B);
    printf("Value of register variable : %d\n", D);
    printf("Value of static variable : %d\n", E);

}

int main()
{
    int C = 30;

    printf("First Function call\n");
    Fun();                                          // Function Call
    printf("Second Function call\n");                
    Fun();
    printf("Third Function call\n");
    Fun();

    return 0;
}