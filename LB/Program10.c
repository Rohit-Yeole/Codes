/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Steps to follow while programming
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//  Step 1  :   Understand the problem statement
//  Step 2  :   Write the Algorithm
//  Step 3  :   Decide the Programming Language
//  Step 4  :   Write the program    
//  Step 5  :   Test the program

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Problem Statememt   :   Accept number from user and check whether it is divisible by 5 or not
//
//  Input   :   23
//  Output  :   23 is not divisible by 5   
//
//  Input   :   25
//  Output  :   25 is divisible by 5
//
//  Input   :   -20
//  Output  :   -20 is divisible by 5
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Algorithm
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
    START
        Accept number from user as NO
        Divide that NO by 5 and check the value of remainder
        If the value is 0
            Then display as NO is divisible by 5
        Otherwise
            display as NO is not divisible by 5
    END
*/

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name   :   DivisibleByfive
//  Description     :   To check whether input is divisible by 5 or not
//  Input           :   Integer
//  Output          :   Boolean
//  Author          :   Rohit Rajendra Yeole (LG250)
//  Date            :   12/10/2022

bool DivivsibleByFive(int iNo)
{
    int iAns = 0;
    iAns = iNo % 5; 

    if(iAns == 0)                           
    {                                       
        return true;                           
    }                                       
    else                                    
    {                                       
        return false;                           
    }                                       
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Entry Point function
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    bRet = DivivsibleByFive(iValue);
    
    if(bRet == false)                           
    {
        printf("%d is not divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is divisible by 5\n",iValue);
    }

    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Result
//  Input   :   25
//  Output  :   25 is divisible by 5
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////