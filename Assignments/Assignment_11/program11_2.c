////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : RangeDisplayEven
//  Description   : Accept range from user & display all Even number that range
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 28/10/2025
//
////////////////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf(" %d ", iCnt);
        }
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

    printf("Enter starting point : ");
    scanf("%d", &iValue1);

    printf("Enter ending point : ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 23 35
//  Output : 24  26  28  30  32  34
//
//  Input  : 10 18
//  Output : 10  12  14  16  18
//
//  Input  : 10 10
//  Output : Enter ending point :  10
//
//  Input  : -10 2
//  Output : -10  -8  -6  -4  -2  0  2
//
//  Input  : 90 18
//  Output : Invalid range
//
////////////////////////////////////////////////////////////////////////////////