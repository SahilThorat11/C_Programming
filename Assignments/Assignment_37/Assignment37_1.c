////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkCharr
//  Description   : Accept String from user & accept one character and Check presnt or not.
//  Input         : Character
//  Output        : Boolean
//  Author        : Sahil Rajaram Thorat
//  Date          : 02/12/2025
//
////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCharr(char str[], char ch)
{
    int iCnt = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == ch)
        {
            return TRUE;
        }
        iCnt++;
    }

    return FALSE;  

} // End of function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter the String :\n");
    scanf("%[^'\n]s", Arr);

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    bRet = ChkCharr(Arr, cValue);

    if (bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character Not Found");
    }

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Marvellous
//  Input   : Enter the character : M
//  Ouptput : Character Found
//
//  Input   : Marvellous
//  Input   : Enter the character : W
//  Ouptput : Character Not Found
//
////////////////////////////////////////////////////////////////////////////////