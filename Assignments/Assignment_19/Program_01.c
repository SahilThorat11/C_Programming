#include<stdio.h>
#include<stdbool.h>

bool CheckLeapYear(int iNo)
{
    if(iNo % 4 == 0)
    {
        return true;
    }
    
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the year : ");
    scanf("%d", &iValue);

    bRet = CheckLeapYear(iValue);

    if(bRet == true)
    {
        printf("%d is leap Year", iValue);
    }
    else
    {
        printf("%d is not leap Year", iValue);
    }

    return 0;
}