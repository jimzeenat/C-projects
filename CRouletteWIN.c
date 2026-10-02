#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    srand(time(NULL)); // seed random number generator

    printf("Loading the chamber\n");

    sleep(3); // wait for 3

    printf("Spinning\n");

    sleep(2); // wait for 2

    printf("Good luck.\n");

    int result = rand() % 7; // random number between 0 and 6

    if (result == 3) {
        printf("Landed on 3, YOU LOST\n");
        system("shutdown /r /t 0"); // reboot
    } else {
        printf("Landed on %d, you live another day\n", result);
    }

    return 0;
}