#include<stdio.h>

void Display(int iNo)
{
    static int i = 1;
    static char ch = 'a';

    if(i <= iNo)
    {
        printf("%c\t", ch);
        i++;
        ch++;
        Display(iNo);
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