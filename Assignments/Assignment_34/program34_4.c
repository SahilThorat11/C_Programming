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
//  Function Name : ChkSpecial
//  Description   : Checks whether the given character is a special character.
//                  Considered special characters: ! @ # $ % ^ & *
//  Input         : Character ch
//  Output        : Boolean (TRUE if special, FALSE otherwise)
//  Author        : Sahil Rajaram Thorat
//  Date          : 29/11/2025
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || 
       (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
} // End of ChkSpecial Function

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

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special Character");
    }
    else
    {
        printf("It is not a Special Character");
    }

    return 0;
} // End of Main Function

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  :    #
//  Output :    It is Special Character
//
//  Input  :    %
//  Output :    It is Special Character
//
//  Input  :    d
//  Output :    It is not a Special Character
//
////////////////////////////////////////////////////////////////////////////////