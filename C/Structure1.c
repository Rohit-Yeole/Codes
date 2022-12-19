#include<stdio.h>

// Structure Declaration
// There is NO memory allocation at this point
struct Demo
{
    int i;
    float f;
    int j;
    double d;
};

int main()
{
    // Structure Object / variable creation
    // Memory gets allocated at this point
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;

    // Memory initialisation
    obj1.d = 11.0;
    obj2.i = 21;
    obj3.j = 51;

    printf("Size of obj1 is : %d\n",sizeof(obj1));
    printf("Size of obj2 is : %d\n",sizeof(obj2));
    printf("i of obj2 is : %d\n",obj2.i);

    return 0;
}

struct Demo
{
    int i = 11;           // Not Allowed 
    char ch = 'A';        // Not Allowed
};
