#include<stdio.h>

void DisplayGrade(int iMarks)
{
    if(iMarks > 80 && iMarks <= 100)
    {
        printf("Your Grade is A\n");
    }
    else if(iMarks > 60 && iMarks <= 80)
    {
        printf("Your Grade is B\n");
    }
    else if(iMarks > 50 && iMarks <= 60)
    {
        printf("Your Grade is C\n");
    }
    else if(iMarks > 30 && iMarks <= 50)
    {
        printf("Your Grade is D\n");
    }
    else if(iMarks > 0 && iMarks <= 30)
    {
        printf("You are fail\n");
    }
    else
    {
        printf("Invalid Marks\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Marks : ");
    scanf("%d", &iValue);

    DisplayGrade(iValue);

    return 0;
}