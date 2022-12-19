#include<stdio.h>

int main()
{
    //All the below memory allocations are static memory allocation

    // First way to initailise array
    int Arr[4] = {10,20,30,40};      // member initialisation list

    //Second way to initialise array
    int Brr[] = {10,20,30,40};       // member initialisation list

    //Third way to initialise array
    int Crr[4];               
    // Member by member initialisation
    Crr[0] = 10;
    Crr[1] = 20;
    Crr[2] = 30;
    Crr[3] = 40;

    return 0;
}