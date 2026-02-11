#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0, iCount = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0 && iCnt % 3 == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}