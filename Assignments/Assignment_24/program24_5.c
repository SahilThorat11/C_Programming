////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DigitsSum
//  Description   : Accept N number from user & display summation of ditits of
//                  each number.
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 16/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iTemp = 0, iSum = 0, iDigit = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iTemp = Arr[iCnt];
        iSum = 0;

        while (iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }

        printf("%d ", iSum);
    }
} // End of Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0;
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

    DigitsSum(p, iSize);

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
//      8225
//      665
//      3
//      76
//      953
//      858
//  Output :
//      17 17 3 13 17 21
//
////////////////////////////////////////////////////////////////////////////////