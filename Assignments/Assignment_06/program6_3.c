////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : ChkEqual
//  Description   : Accept number from user & check Equql or not equal
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 27/10/2025
//
////////////////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1, int iNo2)
{
    if (iNo1 == iNo2)
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
    int iValue1 = 0;
    int iValue2 = 0;

    bool bRet = false;

    printf("Plese enter two number : ");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if (bRet)
    {
        printf("Equal %d %d", iValue1, iValue2);
    }
    else
    {
        printf("Not Equal %d %d", iValue1, iValue2);
    }

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 10 10
//  Output : Equal 10 10
//
//  Input  : 10 12
//  Output : Not Equal 10 12
//
//  Input  : 10 -10
//  Output : Not Equal 10 10
//
////////////////////////////////////////////////////////////////////////////////