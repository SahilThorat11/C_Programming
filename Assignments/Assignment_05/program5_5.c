////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : FindLargest
//  Description   : Accept 3 number from user & check Largest number
//  Input         : Integer
//  Output        : Integer
//  Author        : Sahil Rajaram Thorat
//  Date          : 17/10/2025
//
////////////////////////////////////////////////////////////////////////////////

int FindLargest(int num1, int num2, int num3)
{
    int largest = 0;

    if (num1 >= num2 && num1 >= num3)
    {
        return largest = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        return largest = num2;
    }
    else
    {
        return largest = num3;
    }

    return largest;
} // End function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int result = 0;

    printf("Enter three number : ");
    scanf("%d %d %d", &number1, &number2, &number3);

    result = FindLargest(number1, number2, number3);

    printf("Largest number is : %d\n", result);

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 12 567 0
//  Output : Largest number is : 567
//
////////////////////////////////////////////////////////////////////////////////