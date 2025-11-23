////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accept two numbers from user and print given pattern. 
//  Input         : Integer, Integer
//  Output        : void
//  Author        : Sahil Rajaram Thorat
//  Date          : 21/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j % 2 == 0)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
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
//  Input  :    iRow = 4    iCol = 4
//      
//  Output : *       #       *       #
//           *       #       *       #
//           *       #       *       #
//           *       #       *       #
////////////////////////////////////////////////////////////////////////////////