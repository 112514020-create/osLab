#include <stdio.h>
#include <signal.h>

void handler(int sig)
{
    printf("Signal %d received.\n", sig);
}

int main()
{
    signal(SIGINT, handler);

    printf("Raising SIGINT...\n");

    raise(SIGINT);

    printf("Program continues after handling signal.\n");

    return 0;
}