////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayASCII
//  Description   : Displays the ASCII table for all values from 0 to 255
//                  showing Decimal, Hexadecimal, Octal, and Character.
//
//  Author        : Sahil Rajaram Thorat
//  Date          : 29/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int iCnt = 0;

    printf("Dec\tHex\tOct\tChar\n");
    printf("----------------------------\n");

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        if(iCnt < 32 || iCnt == 127)
        {
            printf("%d\t%X\t%o\t.\n", iCnt, iCnt, iCnt);

        }  
        else
        {
            printf("%d\t%X\t%o\t%c\n", iCnt, iCnt, iCnt, iCnt);
        }
            
    }
}// End of DisplayASCII Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return 0;
}// End of main Function