////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : CountEven
//  Description   : Accept N numbers from user and return difference between 
//                  even and odd numbers.
//  Input         : Integer Array, Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iCount1 = 0, iCount2 = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount1++;
        }

        if((Arr[iCnt] % 2) == 1)
        {
            iCount2++;
        }
    }

    return iCount1 - iCount2;

} // End of Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iLength);
    
    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements : \n",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr, iLength);

    printf("Difference between even number and odd numbers are : %d\n",iRet);

    free(ptr);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//   
//  Input : 7
//          
//         Elements : 85    66      3      80     93     88     90
//           
//  Output : 1
//  
//  Input : 6
//          
//         Elements : 11     22      33      44     55      66   
//           
//  Output : 0
//           
////////////////////////////////////////////////////////////////////////////////