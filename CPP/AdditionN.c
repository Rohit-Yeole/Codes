/*
    Steps to develop the application
        Step1 : Understand the problem statement
        Step2 : Wtite the algorithm
        Step3 : Decide the PL                (C/C++/Java/Python/_______)
        Step4 : Write the program
        Step5 : Test the program
*/

// Accept N numbers from user and perform the addition

// Input 
// Value of N =5
// Values : 10 20 30 40 50

// Output 
// Addition is 150

// Algorithm
/*
    START
        Accept the number of elements from user
        Allocate the memory to store that numbers
        Accept the numbers from user
        Perform addition of all numbers
        Display the addition
    END
*/


#include<stdio.h>       // for printf scanf
#include<stdlib.h>      // for malloc and free

////////////////////////////////////////////////////////////////////////////////////////
//
//  Application name : Addition of N numbers
//  Input : N numbers
//  Output : Addition
//  Author : Rohit Rajendra Yeole
//  Date : 18 September 2022
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int *Arr = NULL;        // Pointer to hold address of array
    int iSize = 0;          // Variable to hold size of array 
    register int i = 0;     // Loop counter
    int iSum = 0;           // Variable to hold addition

    printf("Please enter how many elements you want?\n");
    scanf("%d",&iSize);

    // Allocate the memory
    Arr = (int *)malloc(iSize * sizeof(int));

    printf("Memory allocation is successful\n");
    printf("Please enter the elements\n");

    for(i = 0; i<iSize; i++)
    {
        scanf("%d",&Arr[i]);
    }

    // Perform Addition
    for(i = 0; i<iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    printf("Addition is :%d\n",iSum);

    free(Arr);
    printf("Memory gets deallocated\n");

    return 0;
}