////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : StrRev
//  Description   : Accept String from user & reverse that string in place.
//  Input         : Character
//  Output        : Void
//  Author        : Sahil Rajaram Thorat
//  Date          : 02/12/2025
//
////////////////////////////////////////////////////////////////////////////////

void StrRev(char str[])
{
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';

    while (str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--;

    while (iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }

} // End of function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////
int main()
{
    char Arr[20];

    printf("Enter the String :\n");
    scanf("%[^'\n]s", Arr);

    StrRev(Arr);

    printf("Modified String is : %s", Arr);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : Enter the String : abcd
//  Output  : Modified String is : dcba
//
//  Input   : Enter the String : abba
//  Output  : Modified String is : abba
//
////////////////////////////////////////////////////////////////////////////////