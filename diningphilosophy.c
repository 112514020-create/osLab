#include <stdio.h>

int main() {
    int n = 2;
    int i;

    printf("Dining Philosopher Problem Simulation\n\n");

    for(i = 0; i < n; i++) {
        printf("Philosopher %d is THINKING.\n", i + 1);
        printf("Philosopher %d picks up LEFT fork.\n", i + 1);
        printf("Philosopher %d picks up RIGHT fork.\n", i + 1);
        printf("Philosopher %d is EATING.\n", i + 1);
        printf("Philosopher %d puts down RIGHT fork.\n", i + 1);
        printf("Philosopher %d puts down LEFT fork.\n", i + 1);
        printf("Philosopher %d starts THINKING again.\n\n", i + 1);
    }

    return 0;
}