#include <stdio.h>
#include <unistd.h>
#include <time.h>

int main() {

    int buses = 0;

    while (buses == 0) {
        printf("buses dont have seatbelts\n");
        usleep(750000);
    }
}