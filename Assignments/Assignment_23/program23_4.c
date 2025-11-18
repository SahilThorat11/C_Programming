//////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Range
//  Description   : Accept N number from user & Accept Range Display all elements from
//                  that Range.
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iSize, int iNo1, int iNo2)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if ((Arr[iCnt] >= iNo1) && (Arr[iCnt] <= iNo2))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
} // End of Range Function

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iValue1 = 0, iValue2 = 0;
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

    printf("Enter the strating point :\n");
    scanf("%d", &iValue1);

    printf("Enter the Ending point :\n");
    scanf("%d", &iValue2);

    Range(p, iSize, iValue1, iValue2);

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
//      Enter number of Check Index number :
//      66
//      Enter the values :
//      85
//      66
//      3
//      76
//      93
//      88
//      Enter the strating point :
//      60
//      Enter the Ending point :
//      90
//  Output :
//      85  66  76  88
//
//
///////////////////////////////////////////////////////////////////////////////////////