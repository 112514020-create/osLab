#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Program will abort now.\n");

    abort();

    printf("This line will never execute.\n");

    return 0;
}