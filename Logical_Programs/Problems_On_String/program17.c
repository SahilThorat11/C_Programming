#include<stdio.h>

int CountOccurence(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
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
    char cValue = '\0';

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);                // Initial space will work for all OS.      

    iRet = CountOccurence(Arr, cValue);

    printf("Occurence of %c is : %d\n", cValue,iRet);
    
    return 0;
}