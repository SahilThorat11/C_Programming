////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

/*
===============================================================================
    Macro Definitions:
    ------------------
    TRUE  -> 1  (Indicates condition is satisfied)
    FALSE -> 0  (Indicates condition is not satisfied)

    These macros improve readability and help simulate Boolean values.
===============================================================================
*/

typedef int BOOL;

/*
===============================================================================
    Typedef Explanation:
    --------------------
    typedef int BOOL;

    This creates a new data type named BOOL (alias for int).
    Using BOOL makes the program more expressive when returning
    true/false results.
===============================================================================
*/


////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkSmall
//  Description   : Checks whether the given character is a SMALL CASE alphabet
//                  (characters 'a' to 'z').
//
//  Input         : Character 
//  Output        : Boolean (TRUE or FALSE)
//  Author        : Sahil Rajaram Thorat
//  Date          : 28/11/2025
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkSmall(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        return TRUE;   // Character is a lowercase alphabet
    }
    else
    {
        return FALSE;  // Character is not lowercase
    }
} // End of ChkSmall Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Small Character\n");
    }
    else
    {
        printf("It is not a Small Character\n");
    }

    return 0;
}// End of main Function

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  :    a
//  Output :    It is a Small Character
//
//  Input  :    A
//  Output :    It is not a Small Character
//
//  Input  :    #
//  Output :    It is not a Small Character
//
//  Input  :    5
//  Output :    It is not a Small Character
//
////////////////////////////////////////////////////////////////////////////////
