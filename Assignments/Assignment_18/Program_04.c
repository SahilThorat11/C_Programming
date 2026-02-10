#include<stdio.h>

void SumDigits(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        else
        {
            iSumOdd = iSumOdd + iDigit;
        }

        iNo = iNo / 10;
    }

    printf("Summation of Even Digits are : %d\n", iSumEven);
    printf("Summation of Odd Digits are : %d\n", iSumOdd);
}

int main()
{
    int iValue = 0;

    printf("Enter the number  : \n");
    scanf("%d", &iValue);

    SumDigits(iValue);

    return 0;
}