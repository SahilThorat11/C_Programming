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
//  Date          : 22/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a'; j <= iCol; j++, ch++)  
        {
            if(i % 2 == 0)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("%c\t", ch);
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
//  Input  : iRow = 5   iCol = 5
//
//  Output :    a       b       c       d       e
//              1       2       3       4       5
//              a       b       c       d       e
//              1       2       3       4       5
//              a       b       c       d       e
//
////////////////////////////////////////////////////////////////////////////////