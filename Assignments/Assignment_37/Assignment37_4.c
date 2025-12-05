////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : LastChar
//  Description   : Accept String from user & accept one character return index 
//                  of last Occurrence of that character.
//  Input         : Character
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 02/12/2025
//
////////////////////////////////////////////////////////////////////////////////

int LastChar(char str[], char ch)
{
    int iCnt = 0;
    int iLast = -1;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == ch)
        {
            iLast = iCnt;
        }
        iCnt++;
    }
    return iLast;

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
    int iRet = 0;

    printf("Enter the String :\n");
    scanf("%[^'\n]s", Arr);

    printf("Enter the character :\n");
    scanf(" %c", &cValue);

    iRet = LastChar(Arr, cValue);

    printf("Character Location is : %d", iRet);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the String :
//              Marvellous Multi OS
//  Input   : Enter the character : M
//  Output  : Character Frequency is : 11
//
//  Input   : Enter the String :
//              Marvellous Multi OS
//  Input   : Enter the character : W
//  Output  : Character Frequency is : -1
//
////////////////////////////////////////////////////////////////////////////////