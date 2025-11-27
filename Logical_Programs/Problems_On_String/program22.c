#include<stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0, iCountCapital = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;   
        }
        else                                     // Issue
        {
            iCountSmall++;
        }
        str++;
    }

    printf("Number of Small characters are : %d\n", iCountSmall);
    printf("Number of Capital characters are : %d\n", iCountCapital);

}

int main()
{
    char Arr[50] = {'\0'};
        
    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    CountAll(Arr);
    
    return 0;
}