////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description   : Accept String from user and check whether it contains vowels 
//                  in it or not.
//  Input         : Character
//  Output        : boolean
//  Author        : Sahil Rajaram Thorat
//  Date          : 30/11/2025
//
////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef bool BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
           (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }

        str++;
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
    BOOL bRet = 0;

    printf("Entre the String : \n");
    scanf("%[^'\n']s", Arr);

    bRet = ChkVowel(Arr);

    if (bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : marvellous
//  Ouptput : Contains Vowel
//
//  Input   : Demo
//  Ouptput : Contains Vowel
//
//  Input   : xyz
//  Ouptput : There is no Vowel
//
////////////////////////////////////////////////////////////////////////////////