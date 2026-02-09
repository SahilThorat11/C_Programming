#include<stdio.h>

int FindMin(int iNo)
{
    int iDigit = 0;
    static int iMin = 9;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < iMin && iDigit >= 0)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10;
        FindMin(iNo);
    }

    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = FindMin(iValue);

    printf("Smallest digit from given number is  : %d\n", iRet);

    return 0;
}