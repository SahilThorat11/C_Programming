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
//  Function Name : ChkAlpha
//  Description   : Accepts a character and checks whether it is an alphabet
//                  (either uppercase A–Z or lowercase a–z).
//  Input         : Character 
//  Output        : Boolean (TRUE or FALSE)
//  Author        : Sahil Rajaram Thorat
//  Date          : 28/11/2025
//
////////////////////////////////////////////////////////////////////////////////

BOOL ChkAlpha(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}// End of ChkAlpha Function

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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character\n");
    }
    else
    {
        printf("It is not a Character\n");
    }

    return 0;
} // End of Main Function

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : a
//  Output :It is Character
//
//  Input  : A
//  Output :It is Character
//
//  Input  : #
//  Output :It is not a Character
//
////////////////////////////////////////////////////////////////////////////////