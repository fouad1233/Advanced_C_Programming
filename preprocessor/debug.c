#include <stdio.h>
#define DEBUG
#ifndef DEBUG
#define printf (void)
#endif

int main()
{
    printf("Hello, world!\n");
    return 0;
}