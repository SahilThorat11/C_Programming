////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : strCpyCap
//  Description   : Accept String from user & copy that characters of that string
//                  into another string by converting all Captil character into Samll.
//  Input         : Character
//  Output        : void
//  Author        : Sahil Rajaram Thorat
//  Date          : 03/12/2025
//
////////////////////////////////////////////////////////////////////////////////

void StrCpySmall(char *str, char *dest)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str + 32;
        }
        else
        {
            *dest = *str;
        }

        str++;
        dest++;
    }
    *dest = '\0';

} // End of function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter the String :\n");
    scanf("%[^\n]", Arr);

    StrCpySmall(Arr, Brr);

    printf("%s", Brr);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Marvellous Python 2
//  Ouptput : marvellous python 2
//
////////////////////////////////////////////////////////////////////////////////