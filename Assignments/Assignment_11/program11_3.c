////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSum
//  Description   : Accept range from user & retur addition of number that range
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 28/10/2025
//
////////////////////////////////////////////////////////////////////////////////

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
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
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 23 35
//  Output : Addition is 212
//
//  Input  : 10 18
//  Output : Addition is 126
//
//  Input  : -10 2
//  Output : Addition is -52
//
//  Input  : 90 18
//  Output : Invalid range
//           Addition is 0
//
////////////////////////////////////////////////////////////////////////////////