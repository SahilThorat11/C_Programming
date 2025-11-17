////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Frequency
//  Description   : Accept N numbers from user and return frequiency of that number.
//  Input         : Integer Array, Integer, Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iCount++;
        }
    }

    return iCount;

} // End of Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the values : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Frequency(ptr, iLength,11);

    printf("Frequency of 11 is : %d\n", iRet);

    free(ptr);
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//   
//  Input : 6
//          
//         Elements : 85    66      11      80     11     88   
//           
//  Output : 2
//  
//  Input : 6
//          
//         Elements : 85     22      33      44     55      66   
//           
//  Output : 0
//           
////////////////////////////////////////////////////////////////////////////////