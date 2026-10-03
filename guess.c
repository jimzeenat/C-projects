#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
    int number;
    int guess;
    int attempts = 0;
    srand(time(NULL)); //seed the random number generator with the current time

    number = rand() % 100 + 1; //generate a random number between 1 and 100
    printf("the very evil person who starts with an S has stolen christmas. you need to guess the number to save it (ok/NO)\n");

    
    do {
        printf("enter your guess its a number between 1 and 100\n");
        scanf("%d", &guess);
        if (guess < number) {
            printf("too low, try again\n");
        } else if (guess > number) {
            printf("too high, try again\n");
        } else {
            printf("congrats you saved christmas from the little s in %d attempts!\n", attempts + 1);
            sleep(1);
            printf("you are a true hero, the little s will never steal christmas again, also the number was indeed %d\n", number);
        }
    } while (guess != number);
    return 0;
}