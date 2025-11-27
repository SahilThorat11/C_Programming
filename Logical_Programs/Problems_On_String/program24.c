#include<stdio.h>

int CountDigits(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 48) && (*str <= 57))
        {
            iCount++;   
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountDigits(Arr);
    
    printf("Number of digits are : %d\n", iRet);

    return 0;
}