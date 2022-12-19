#include<stdio.h>

struct Demo
{
    int i;
    char ch;
    float f;
    float d;
    char dh;
};

int main()
{
    struct Demo dobj;

    printf("Size of Structure is : %d\n",sizeof(dobj));

    return 0;
}






// Additional , use for embeded programming , size is 14 as per 1 byte memory available/allocation

// #include<stdio.h>

// #pragma pack(1) // 1  2  4  8  16

// struct Demo
// {
//     int i;
//     char ch;
//     float f;
//     float d;
//     char dh;
// };

// int main()
// {
//     struct Demo dobj;

//     printf("Size of Structure is : %d\n",sizeof(dobj));

//     return 0;
// }