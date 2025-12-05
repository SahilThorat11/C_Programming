////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Prints a sequence of characters based on input.
//
//  Input         : Character 
//  Output        : Void 
//  Author        : Sahil Rajaram Thorat
//  Date          : 29/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    int iCnt = 0;

    if(ch >= 'A' && ch <= 'Z')
    {
        while(ch <= 'Z')
        {
            printf("%c\t",ch);
            ch++;
        }
    }

    else if(ch >= 'a' && ch <= 'z')
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);
            ch--;
        }
    }

    else
    {
        return;
    }

    printf("\n");

}// End of Display Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}// End of main Function


////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : Q
//  Output : Q       R       S       T       U       V       W       X       Y       Z
//
//  Input  : m
//  Output : m       l       k       j       i       h       g       f       e       d       c       b       a
//
//  Input  : 9
//  Output : (nothing)
//
////////////////////////////////////////////////////////////////////////////////
