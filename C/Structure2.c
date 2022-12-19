#include<stdio.h>

struct Student
{
    int Marks;
    int Age;
    char Division;  
};

int main()
{
    struct Student Amey;
    struct Student Priya;

    Amey.Marks = 98;
    Amey.Age = 23;
    Amey.Division = 'A';

    Priya.Marks = 96;
    Priya.Age = 24;
    Priya.Division = 'B';

    return 0;
}