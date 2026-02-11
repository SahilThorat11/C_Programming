#include<stdio.h>

int ProductCal(int iNo)
{
    int iDigit = 0, iProd = 1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iProd = iProd * iDigit;
        iNo = iNo / 10;
    }

    return iProd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = ProductCal(iValue);

    printf("Product of digits are : %d\n", iRet);

    return 0;
}