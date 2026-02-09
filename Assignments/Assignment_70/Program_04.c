#include<stdio.h>

int Fact(int iNo)
{
    int iDigit = 0; 
    static int iFact = 1;

    if (iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
        Fact(iNo);
    }

    return iFact;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Fact(iValue);

    printf("Factorial of %d are : %d\n", iValue, iRet);

    return 0;
}