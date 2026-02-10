#include<stdio.h>
#include<stdbool.h>

bool CheckOdd(int iNo)
{
    if((iNo % 2) != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    bRet = CheckOdd(iValue);

    if(bRet == true)
    {
        printf("Given number is Odd.\n");
    }
    else
    {
        printf("Given number is not Odd\n");
    }

    return 0;
}