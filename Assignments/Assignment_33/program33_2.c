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
//  Function Name : ChkCapital
//  Description   : Accepts a character and checks whether it is CAPITAL.
//                  (uppercase A–Z only).
//
//  Input         : Character 
//  Output        : Boolean (TRUE or FALSE)
//  Author        : Sahil Rajaram Thorat
//  Date          : 28/11/2025
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkCapital(char ch)
{
    if((ch >= 'A' && ch <= 'Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
} // End of ChkCapital Function

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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return 0;
} // End of Main Function

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  :    a
//  Output :    It is not a Capital Character
//
//  Input  :    A
//  Output :    It is Capital Character
//
//  Input  :    #
//  Output :    It is not a Capital Character
//
////////////////////////////////////////////////////////////////////////////////