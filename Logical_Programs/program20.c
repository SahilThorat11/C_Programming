#include<stdio.h>

// Dynamic function

void Display(int iFreqency)                
{
    int iCnt = 0;

    // Filter
    if(iFreqency < 0)
    {
        printf("Invalid input\n");
        return;
    }

    for(iCnt = 1; iCnt <= iFreqency; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()                  
{
    int iCount = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iCount);

    Display(iCount);

    return 0;
}
