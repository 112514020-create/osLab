#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main()
{
    printf("Process ID: %d\n", getpid());

    printf("Waiting for 5 seconds...\n");
    sleep(5);

    kill(getpid(), SIGKILL);

    printf("This line will never execute.\n");

    return 0;
}