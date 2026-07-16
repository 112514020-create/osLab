#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void alarm_handler(int sig)
{
    printf("Alarm received!\n");
}

int main()
{
    signal(SIGALRM, alarm_handler);

    alarm(5);

    printf("Waiting for alarm...\n");

    pause();

    return 0;
}