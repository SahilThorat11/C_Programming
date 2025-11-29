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
//  Function Name : ChkDigit
//  Description   : Checks whether the given character is a numeric digit
//                  (characters '0' to '9').
//
//  Input         : Character 
//  Output        : Boolean (TRUE or FALSE)
//  Author        : Sahil Rajaram Thorat
//  Date          : 28/11/2025
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9')
    {
        return TRUE;    // Character is a digit
    }
    else
    {
        return FALSE;   // Character is NOT a digit
    }
} // End of ChkDigit Function


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

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit\n");
    }
    else
    {
        printf("It is not a Digit\n");
    }

    return 0;   // Program executed successfully
} // End of Main Function

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  :    a
//  Output :    It is not a Digit
//
//  Input  :    A
//  Output :    It is not a Digit
//
//  Input  :    #
//  Output :    It is not a Digit
//
//  Input  :    5
//  Output :    It is Digit
//
////////////////////////////////////////////////////////////////////////////////