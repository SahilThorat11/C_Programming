//////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Check
//  Description   : Accept N number from user & Accept one another as no ,check presnt or not.
//  Input         : Integer
//  Output        : BOOL type
//  Author        : Sahil Rajaram Thorat
//  Date          : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            return 1;
        }
    }
    return 0;
} // End of Check Function

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iValuue = 0;
    BOOL bRet = FALSE;
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

    printf("Enter number of Check present or Not present :\n");
    scanf("%d", &iValuue);

    bRet = Check(p, iSize, iValuue);

    if (bRet == TRUE)
    {
        // printf("Number is present.");
        printf("TRUE");
    }
    else
    {
        // printf("Number is not present.");
        printf("FALSE");
    }

    free(p);

    return 0;
} // End of main function

///////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  :
//      Enter number of element :
//      2
//      Enter number of Check present or Not present :
//      66
//      Enter the values :
//      66
//      22
//  Output :
//     TRUE
//
//  Input  :
//      Enter number of element :
//      2
//      Enter number of Check present or Not present :
//      66
//      Enter the values :
//      45
//      22
//  Output :
//     FALSE
//
///////////////////////////////////////////////////////////////////////////////////////