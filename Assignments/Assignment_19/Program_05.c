#include<stdio.h>

int CalPower(int iNo, int iPow)
{
    int iCnt = 0, iResult = 1;

    for(iCnt = 1; iCnt <= iPow; iCnt++)
    {
        iResult = iResult * iNo;
    }

    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the Number : ");
    scanf("%d", &iValue1);

    printf("Enter the Power to calculate : ");
    scanf("%d", &iValue2);

    iRet = CalPower(iValue1, iValue2);

    printf("%d to the power %d is becomes : %d\n", iValue1, iValue2, iRet);

    return 0;
}