////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FactorialDiff
//  Description   : Accept number from user & Diff between Even or Odd factorial
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 27/10/2025
//
////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEventFactMult = 1;
    int iOddFactorial = 1;
    int iDiffer = 0;

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
        else
        {
            iOddFactorial = iOddFactorial * iCnt;
        }
    }

    iDiffer = iEventFactMult - iOddFactorial;
    return iDiffer;
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

    iRet = FactorialDiff(iValue);

    printf("factorial Diffrence is  %d", iRet);

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 5
//  Output : -7
//
//  Input  : -5
//  Output : -7
//
//  Input  : 10
//  Output : 2895
//
////////////////////////////////////////////////////////////////////////////////