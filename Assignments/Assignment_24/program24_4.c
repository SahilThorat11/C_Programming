////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Digits
//  Description   : Accept N number from user & display all such number which
//                  contains 3 digits in it.
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 16/11/2025
//
////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("   %d\t", Arr[iCnt]);
        }
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

    Digits(p, iSize);

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
//      665  953  858
//
////////////////////////////////////////////////////////////////////////////////