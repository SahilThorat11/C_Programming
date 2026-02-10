#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{
    if((iNo % 5) == 0 && (iNo % 11) == 0)
    {
        return true;
    }
    
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 5 and 11", iValue);
    }
    else
    {
        printf("%d is Not divisible by 5 and 11", iValue);
    }

    return 0;
}