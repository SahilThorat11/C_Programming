////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrCpyToggle
//  Description   : Accept String from user & copy that characters of that string
//                  into another string by toggle the case.
//  Input         : Character
//  Output        : void
//  Author        : Sahil Rajaram Thorat
//  Date          : 03/12/2025
//
////////////////////////////////////////////////////////////////////////////////

void StrCpyToggle(char *str, char *dest)
{
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            *dest = *str + 32;
        }
        else if ((*str >= 'a') && (*str <= 'z'))
        {
            *dest = *str - 32;
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

    StrCpyToggle(Arr, Brr);

    printf("%s", Brr);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Marvellous Python 2
//  Ouptput : mARVELLOUS pYTHON 2
//
////////////////////////////////////////////////////////////////////////////////