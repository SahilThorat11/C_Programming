#include<stdio.h>
#include<stdlib.h>

// Conditional preprocessing
int main()
{
    #ifdef _WIN32        // If windows
        system("dir");
    #else                // If linux/macOS
        system("ls")
    #endif

    return 0;
}