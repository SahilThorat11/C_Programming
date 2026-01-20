#include<stdio.h>
#include<stdlib.h>

// Conditional preprocessing
int main()
{
    #ifdef _WIN32        // If windows
        system("cls");
    #else                // If linux/macOS
        system("clear")
    #endif

    return 0;
}