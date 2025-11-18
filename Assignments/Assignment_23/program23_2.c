//////////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
//////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FirstOcc
//  Description   : Accept N number from user & Accept one another number as iNo,return
//                  index of First occurrence of that iNo.
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////////

int FirstOcc(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    int iStore = -1;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iStore = iCnt;
            break;
        }
    }
    return iStore;
} // End of FirstOcc Function

///////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iValue = 0;
    int iRet = 0;
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

    printf("Enter number of Check Index number :\n");
    scanf("%d", &iValue);

    iRet = FirstOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such Number %d", iRet);
    }
    else
    {
        printf("First occurrence of number is %d", iRet);
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
//      Enter number of Check Index number :
//      66
//      Enter the values :
//      66
//      22
//  Output :
//      First occurrence of number is 0
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
//     First occurrence of number is -1
//
///////////////////////////////////////////////////////////////////////////////////////