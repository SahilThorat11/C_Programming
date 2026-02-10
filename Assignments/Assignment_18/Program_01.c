#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0, iPrime = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iPrime++;
        }
    }

    if(iPrime == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("Given number is prime.\n");
    }
    else
    {
        printf("Given number is not prime\n");
    }

    return 0;
}