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
//  Description   : Accept N numbers from user and return frequency of even numbers
//  Input         : Integer Array, Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 14/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
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

    iRet = CountEven(ptr, iLength);

    printf("Number of even number of : %d\n",iRet);

    free(ptr);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//   
//  Input : 6
//          
//         Elements : 85    66      3      80     93     88
//           
//  Output : 3  
//  Input : 5
//          
//         Elements : 11     22      33      44     55    
//           
//  Output : 2  
//           
////////////////////////////////////////////////////////////////////////////////