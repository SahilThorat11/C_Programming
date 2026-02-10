
////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   FindLarge
//  Description     :   Function to check whether which number is
//                      bigger among three.
//  Input           :   Integer
//  Output          :   Integer
//  Name of Author  :   Sahil Rajaram Thorat
//  Date            :   10/02/2026
//
////////////////////////////////////////////////////////////////////

int FindLarge(int iNo1, int iNo2, int iNo3)
{
    int iMax = 0;

    if((iNo1 > iNo2) && (iNo1 > iNo3))
    {
        iMax = iNo1;
    }
    else if((iNo2 > iNo1) && (iNo2 > iNo3))
    {
        iMax = iNo2;
    }
    else
    {
        iMax = iNo3;
    }

    return iMax;
    
} // End of FindLarge Function

////////////////////////////////////////////////////////////////////
//
// Entry point Function of Application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter the 1st number : ");
    scanf("%d", &iValue1);

    printf("Enter the 2nd number : ");
    scanf("%d", &iValue2);

    printf("Enter the 3rd number : ");
    scanf("%d", &iValue3);

    iRet = FindLarge(iValue1, iValue2, iValue3);

    printf("Largest value is : %d\n", iRet);

    return 0;
} // End of main Function

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 12 22 33
//  Output : 33
//
////////////////////////////////////////////////////////////////////////////////