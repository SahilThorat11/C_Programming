////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accept two numbers from user as Row and Column and print 
//                  given pattern on screeen. 
//  Input         : Integer, Integer
//  Output        : void
//  Author        : Sahil Rajaram Thorat
//  Date          : 21/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0; 
    int iNo = 0;

    iNo = 1;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(iNo > 9)  
            {
                iNo = 1;
            }
            printf("%d\t", iNo);
            iNo++;
        }
        printf("\n");
    }
} // End of Pattern function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : \n");
    scanf("%d",&iValue1);

    printf("Enter number of columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
} // End of main function

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : iRow = 4   iCol = 4
//
//  Output :    1   2   3   4
//              5   6   7   8
//              9   1   2   3
//              4   5   6   7
//
////////////////////////////////////////////////////////////////////////////////