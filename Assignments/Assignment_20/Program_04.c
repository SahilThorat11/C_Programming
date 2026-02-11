#include<stdio.h>

int FindLargets(int iNo)
{
    int iDigit = 0, iMax = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > iMax)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;
    }

    return iMax;
}

int main()
{
    int iValue = 0, iRet = 0;;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = FindLargets(iValue);

    printf("Largest digit in given number : %d\n", iRet);

    return 0;
}