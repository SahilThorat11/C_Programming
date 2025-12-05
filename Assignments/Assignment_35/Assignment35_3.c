////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountCapital
//  Description   : Accept String from user and return difference between frequency
//                  of small character and frequency of capital characters.
//  Input         : Character
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 30/11/2025
//
////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
    int iCount1 = 0, iCount2 = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
        str++;
    }

    return (iCount1 - iCount2);
} // End of function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Entre the String : \n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("Difference between small Letters and Capital Letters are : %d\n", iRet);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input   : MarvelloluS
//  Ouptput : 
//            Difference between small Letters and Capital Letters are : 6
//
//  Input   : Ganesh
//  Ouptput : 
//            Difference between small Letters and Capital Letters are : 4
//
////////////////////////////////////////////////////////////////////////////////