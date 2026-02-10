#include<stdio.h>

void SignCheck(int iNo)
{
    if(iNo > 0)
    {
        printf("The given number is Positive\n");
    }
    else if(iNo < 0)
    {
        printf("The given number is Negative\n");
    }
    else
    {
        printf("The given number is Zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    SignCheck(iValue);

    return 0;
}