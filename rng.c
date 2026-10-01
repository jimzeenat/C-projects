#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // use that same seed for the random number generator

    char text_field[50];

    printf("Pick how many sides the dice should have.\n");

    fgets(text_field, sizeof(text_field), stdin);

    int sides = atoi(text_field); // convert input into integer so it actually can be used

    printf("Rolling...\n");

    usleep(500000); // wait for 0.5 seconds

    printf("Landed on %d\n", (rand() % sides) + 1); /* print a random number between 1 and the number of sides
    yes i do know that im a gambling addict because ive made so many rng things but i just cant stop making them */
}