////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayConvert
//  Description   : Accept Character from user & check vowel or not
//  Input         : Character
//  Output        : Character
//  Author        : Sahil Rajaram Thorat
//  Date          : 17/10/2025
//
////////////////////////////////////////////////////////////////////////////////

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if (CValue == 'A' || CValue == 'E' || CValue == 'I' ||
        CValue == 'O' || CValue == 'U' ||

        CValue == 'a' || CValue == 'e' || CValue == 'i' ||
        CValue == 'o' || CValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
} // End Function //

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character : \n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if (bRet == TRUE)
    {
        // printf("It is a Vowel.\n");
        printf("TRUE\n");
    }
    else
    {
        // printf("It is NOT a Vowel.\n");
        printf("FALSE\n");
    }

    return 0;
} // End main //

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : E
//  Output : TRUE
//
//  Input  : d
//  Output : FALSE
//
////////////////////////////////////////////////////////////////////////////////