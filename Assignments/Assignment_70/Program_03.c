#include<stdio.h>

int StrlenX(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        iCount++;
        str++;
        StrlenX(str);
    }

    return iCount;
}


int main()
{
    int iRet = 0;
    char cArr[20];

    printf("Enter the String : ");
    scanf("%s", cArr);

    iRet = StrlenX(cArr);

    printf("Number of characters from the string are : %d\n", iRet);

    return 0;
}