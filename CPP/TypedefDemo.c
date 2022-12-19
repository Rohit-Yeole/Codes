#include<stdio.h>

//  typedef JUNA_NAV    NAWIN_NAV

typedef int INTEGER;
typedef unsigned long int ULONG;

struct Demo
{
    int i;
    int j;
};

typedef struct Demo DEMO;
typedef struct Demo * PDEMO;

int main()
{
    INTEGER i = 11;         //  int i = 11;
    ULONG j = 21;           //  unsigned long int j = 21;
    DEMO obj;               //  struct Demo obj;
    PDEMO ptr = &obj;       //  struct Demo * ptr = &obj;

    return 0;
}