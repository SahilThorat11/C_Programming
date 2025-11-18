////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Maximum
//  Description   : Accept N number from user & return the Largest number.
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 16/11/2025
//
////////////////////////////////////////////////////////////////////////////////

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
} // End of Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iRet = 0;
    int iCnt = 0;
    int *p = NULL;

    printf("Enter number of element :\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if (NULL == p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the values :\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    iRet = Maximum(p, iSize);

    printf("Largest Number is %d", iRet);

    free(p);

    return 0;
} // End of main function

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  :
//      Enter number of element :
//      6
//      Enter the values :
//      85
//      66
//      3
//      66
//      93
//      88
//  Output :
//      Largest Number is 93
//
////////////////////////////////////////////////////////////////////////////////