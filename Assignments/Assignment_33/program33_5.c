////////////////////////////////////////////////////////////////////////////////
//
//  Required header file
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

/*
===============================================================================
    Macro Definitions:
    ------------------
    TRUE  -> 1  
    FALSE -> 0 

    These macros improve readability when dealing with boolean-like conditions.
===============================================================================
*/

typedef int BOOL;

/*
===============================================================================
    Typedef Explanation:
    --------------------
    typedef int BOOL;

    This creates a new type alias for int.  
    Using BOOL makes the return values TRUE / FALSE more meaningful.
===============================================================================
*/


////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplaySchedule
//  Description   : Accepts a character representing student standard
//                  (A/a, B/b, C/c, D/d) and returns a number that represents
//                  the exam time slot.
//
//  Input         : Character (A–D or a–d)
//  Output        : Integer (1–4 for valid input, 0 for invalid)
//  Author        : Sahil Rajaram Thorat
//  Date          : 28/11/2025
//
////////////////////////////////////////////////////////////////////////////////

BOOL DisplaySchedule(char ch)
{
    if(ch == 'A' || ch == 'a')
    {
        return 1;   // Standard A
    }   
    else if(ch == 'B' || ch == 'b')
    {
        return 2;   // Standard B
    }  
    else if(ch == 'C' || ch == 'c')
    {
        return 3;   // Standard C
    }   
    else if(ch == 'D' || ch == 'd')
    {
        return 4;   // Standard D
    }   
    else
    {
        return 0;   // Invalid standard
    }
}


////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';    
    BOOL bRet = FALSE;     

    printf("Enter the character (A-D): \n");
    scanf("%c",&cValue);    

    bRet = DisplaySchedule(cValue);

    switch(bRet)
    {
        case 1: 
            printf("Exam at 9 AM \n");
            break;

        case 2: 
            printf("Exam at 10 AM \n");
            break;

        case 3: 
            printf("Exam at 11 AM \n");
            break;

        case 4: 
            printf("Exam at 12 NOON \n");
            break;

        default:
            printf("Invalid standard \n");
    }

    return 0;   // Successful execution
} // End of main Function


////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//
//  Input  : A
//  Output : Exam at 9 AM
//
//  Input  : c
//  Output : Exam at 11 AM
//
//  Input  : d
//  Output : Exam at 12 NOON
//
//  Input  : x
//  Output : Invalid standard
//
////////////////////////////////////////////////////////////////////////////////
