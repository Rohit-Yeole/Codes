/*
    Row = 4
    Column = 4

    @   2   3   4
    1   @   3   4
    1   2   @   4
    1   2   3   @

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Row number and column number are different\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == j)
            {
                printf("@\t");
            }
            else
            {
                printf("%d\t",j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter Number of columns\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}