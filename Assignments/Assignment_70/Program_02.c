#include<stdio.h>

int Sum(int iNo)
{
    int iDigit = 0; 
    static int iSum = 0;

    if (iNo > 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Sum(iValue);

    printf("Summation of all digits of %d are : %d\n", iValue, iRet);

    return 0;
}