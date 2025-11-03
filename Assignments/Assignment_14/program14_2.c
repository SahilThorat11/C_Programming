////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckZero
//  Description   : Accept number from user & check whether it contains 0 or not
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 29/10/2025
//
////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        return TRUE;
    }

    while (iNo > 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;

} // End Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 2395
//  Output : There is no Zero
//
//  Input  : 1018
//  Output : It Contains Zero
//
//  Input  : 9000
//  Output : It Contains Zero
//
//  Input  : 10687
//  Output : It Contains Zero
//
////////////////////////////////////////////////////////////////////////////////