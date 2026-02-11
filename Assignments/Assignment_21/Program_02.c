#include<stdio.h>

void CountEvenOdd(int iNo)
{
    int iCnt = 0, iEven = 0, iOdd = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }

    printf("Number of Even digits are : %d\n", iEven);
    printf("Number of Even digits are : %d\n", iOdd);
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    CountEvenOdd(iValue);

    return 0;
}