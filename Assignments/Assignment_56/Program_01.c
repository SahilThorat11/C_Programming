#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char FileName[20];

    printf("Enter the file name that you want to open : ");
    scanf("%s", FileName);

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File gets succeessfully opened with fd : %d\n", fd);
    }

    close(fd);

    return 0;
}