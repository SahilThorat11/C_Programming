#include<stdio.h>

int FindSmallest(int iNo)
{
    int iDigit = 0, iMin = 9;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit < iMin)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10;
    }

    return iMin;
}

int main()
{
    int iValue = 0, iRet = 0;;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = FindSmallest(iValue);

    printf("Smallest digit in given number : %d\n", iRet);

    return 0;
}    