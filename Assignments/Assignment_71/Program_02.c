#include<stdio.h>

int FindMax(int iNo)
{
    int iDigit = 0;
    static int iMax = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;
        FindMax(iNo);
    }

    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = FindMax(iValue);

    printf("Largest digit from given number is  : %d\n", iRet);

    return 0;
}