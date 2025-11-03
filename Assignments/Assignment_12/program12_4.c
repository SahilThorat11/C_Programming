////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : sum_of_even_factors
//  Description   : Accept number from user & print sum of even factors
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 28/10/2025
//
////////////////////////////////////////////////////////////////////////////////

int sum_of_even_factors(int number)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt <= number; iCnt++)
    {
        if (number % iCnt == 0 && iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;

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

    iRet = sum_of_even_factors(iValue);

    printf("Total even factors summation is : %d\n", iRet);

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 10
//  Output : Total even factors summation is : 12
//
//  Input  : 20
//  Output : Total even factors summation is : 36
//
//  Input  : 15
//  Output : Total even factors summation is : 0
//
////////////////////////////////////////////////////////////////////////////////