#include<stdio.h>

struct Student
{
    int Marks;
    int Age;
    char Division;  
};

int main()
{
    struct Student obj;
    struct Student *ptr = NULL;

    ptr = &obj;

    // Indirect accessing operator
    ptr->Age = 21;
    ptr->Marks = 90;
    ptr->Division = 'A';

    return 0;
}