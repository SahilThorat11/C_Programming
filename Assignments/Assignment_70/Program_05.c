#include<stdio.h>

int Mult(int iNo)
{
    int iDigit = 0; 
    static int iMul = 1;

    if (iNo > 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
        Mult(iNo);
    }

    return iMul;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Mult(iValue);

    printf("Product of digits of %d are : %d\n", iValue, iRet);

    return 0;
}