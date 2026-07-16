#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handler(int sig)
{
    printf("Signal received.\n");
}

int main()
{
    signal(SIGINT, handler);

    printf("Press Ctrl+C...\n");

    pause();

    printf("Program resumed.\n");

    return 0;
}