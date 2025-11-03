////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description   : Accept 3 number from user & Multiplication of number
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 27/10/2025
//
////////////////////////////////////////////////////////////////////////////////

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iReturn = 1;
    int iCount = 0;

    if (iNo1 != 0)
    {
        iReturn = iReturn * iNo1;
        iCount++;
    }
    if (iNo2 != 0)
    {
        iReturn = iReturn * iNo2;
        iCount++;
    }
    if (iNo3 != 0)
    {
        iReturn = iReturn * iNo3;
        iCount++;
    }
    if (iCount == 0)
    {
        return 0;
    }

    return iReturn;
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
    int iValue3 = 0;
    int iRet = 0;

    printf("Plese enter three number : ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is : %d\n", iRet);
    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 5 4 7
//  Output : Multiplication is : 140
//
//  Input  : 5 0 7
//  Output : Multipication is : 35
//
//  Input  : 0 0 0
//  Output : Multipication is : 0
//
////////////////////////////////////////////////////////////////////////////////