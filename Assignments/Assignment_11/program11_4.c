////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeSumEven
//  Description   : Accept range from user & return addition even number that range
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 28/10/2025
//
////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if (iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        printf("Invalid range\n");
        return 0;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
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
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    printf("Addition is %d", iRet);

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 23 35
//  Output : Addition is 108
//
//  Input  : 10 18
//  Output : Addition is 70
//
//  Input  : -10 2
//  Output : Invalid range
//
//  Input  : 90 18
//  Output : Invalid range
//
////////////////////////////////////////////////////////////////////////////////