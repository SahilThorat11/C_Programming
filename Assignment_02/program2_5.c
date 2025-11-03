////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accept number from user & check even or odd
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 17/10/2025
//
////////////////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{

    if ((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
} // End Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);

    if (bRet)
    {
        printf("%d is Even Number", iValue);
    }
    else
    {
        printf("%d is Odd Number", iValue);
    }
    /*
    if (bRet == true)
    {
        printf("%d is Even Number", iValue);
    }
    if (bRet == false)
    {
        printf("%d is Odd Number", iValue);
    }
    */
    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 12
//  Output : 12 is Even Number
//
//  Input  : 13
//  Output : 13 is Odd Number
//
////////////////////////////////////////////////////////////////////////////////