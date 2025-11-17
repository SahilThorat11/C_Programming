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
//  Function Name : Check
//  Description   : Accept N numbers from user and return difference between 
//                  even and odd numbers.
//  Input         : Integer Array, Integer, Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 16/11/2025
//
///////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else 
    {
        return true;
    }

} // End of Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iLength = 0,iCnt = 0, iValue = 0;
    bool bRet = false;

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

    bRet = Check(ptr, iLength, 11);

    if(bRet == true)
    {
        printf("11 is present in data\n");
    }
    else 
    {
        printf("11 is not present in data\n");
    }

    free(ptr);

    return 0;
} // End of main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//   
//  Input : 11
//          
//         Elements : 85    66      11      80     93     88   
//           
//  Output : 11 is present 
//  
//  Input : 11
//          
//         Elements : 85     22      33      44     55      66   
//           
//  Output : 11 is absent
//           
////////////////////////////////////////////////////////////////////////////////