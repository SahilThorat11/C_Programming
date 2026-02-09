#include<stdio.h>

void DisplayRev(int iNo)
{
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d", iDigit);
        iNo = iNo / 10;
        DisplayRev(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    DisplayRev(iValue);

    return 0;
}