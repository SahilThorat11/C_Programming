////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountChar
//  Description   : Accept String from user & accept one character & Check Frequency.
//  Input         : Character
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 02/12/2025
//
////////////////////////////////////////////////////////////////////////////////

int CountChar(char str[], char ch)
{
    int iCnt = 0;
    int iCount = 0;

    while (str[iCnt] != '\0')
    {
        if (str[iCnt] == ch)
        {
            iCount++;
        }
        iCnt++;
    }

    return iCount;

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

    iRet = CountChar(Arr, cValue);

    printf("Character Frequency is : %d", iRet);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the String :
//              Marvellous Multi OS
//  Input   : Enter the character : M
//  Output  : Character Frequency is : 2
//
//  Input   : Enter the String :
//              Marvellous Multi OS
//  Input   : Enter the character : W
//  Output  : Character Frequency is : 0
//
////////////////////////////////////////////////////////////////////////////////