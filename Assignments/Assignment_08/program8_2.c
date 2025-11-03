////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Number
//  Description   : Accept single digit from user & print in into word
//  Input         : Integer
//  Output        : Character
//  Author        : Sahil Rajaram Thorat
//  Date          : 27/10/2025
//
////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    // Updater
    if (iNo <= 0)
    {
        iNo = -iNo;
    }

    switch (iNo)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
        break;
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    default:
        printf("Invalid Number.");
    }
    printf("\n");
} // End Function

////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
} // End main

////////////////////////////////////////////////////////////////////////////////
//
//  Testcases succesfully handle by the application
//
//  Input  : 9
//  Output : Nine
//
//  Input  : -3
//  Output : Three
//
//  Input  : 12
//  Output : Invalid Number
//
////////////////////////////////////////////////////////////////////////////////