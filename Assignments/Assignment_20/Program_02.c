#include<stdio.h>

void DisplayRev(int iNo)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    DisplayRev(iValue);
    
    return 0;
}