////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : EvenFactorial
//  Description   : Accept number from user & find even factorial
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 27/10/2025
//
////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iEventFactMult = 1;
    // Updater
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt % 2) == 0)
        {
            iEventFactMult = iEventFactMult * iCnt;
        }
    }
    return iEventFactMult;
} // End Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of number is  %d", iRet);

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 5
//  Output : Even factorial of number is  8
//
//  Input  : -5
//  Output : Even factorial of number is  8
//
//  Input  : 10
//  Output : Even factorial of number is  3840
//
////////////////////////////////////////////////////////////////////////////////