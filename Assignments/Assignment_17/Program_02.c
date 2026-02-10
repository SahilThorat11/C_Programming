
////////////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name   :   CheckIsPalindrome
//  Description     :   Function to check whether given number is
//                      palindrome or not.
//  Input           :   Integer
//  Output          :   Boolean
//  Name of Author  :   Sahil Rajaram Thorat
//  Date            :   10/02/2026
//
////////////////////////////////////////////////////////////////////

bool CheckIsPalindrome(int iNo)
{
    int iPalin = 0, iDigit = 0, iRev = 0;

    iPalin = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }

    if(iPalin == iRev)
    {
        return true;
    }

    return false;
} // End of CheckIsPalindrome Function

////////////////////////////////////////////////////////////////////
//
// Entry point Function of Application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckIsPalindrome(iValue);

    if(bRet == true)
    {
        printf("Given number is palindrome.\n");
    }
    else
    {
        printf("Given number is Not palindrome.\n");
    }

    return 0;
} // End of main Function

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 1234
//  Output : 10
//
////////////////////////////////////////////////////////////////////////////////