// Rows     4
// Columns  4

/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/

#include<stdio.h>

void Display(int iRow, int iCol)        // N^2
{
    int i = 0, j = 0;

    if(iRow < 0)
    {
        iRow = -iRow;
    }
    if(iCol < 0)
    {
        iCol = -iCol;
    }
//         1       2       3
    for(i = 1; i <= iRow; i++)      // Outer loop
    {
        //    1         2      3
        for(j = 1; j <= iCol; j++)  // Inner loop    Outer cha 4
        {
            printf("*\t");      // Inner cha 4
        }
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows \n");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}