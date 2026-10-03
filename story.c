#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    printf("this is a story about a man named jzrblx\n");
    sleep(2);
    printf("he was a man who loved to code and play games\n");
    sleep(2);
    printf("one day he decided to make a calculator and a music player and a tiki phonk\n");
    sleep(2);
    printf("would you like to tiki?\n");
    char text_field[256];
    scanf("%255s", text_field);
    if (text_field[0] == 'y' || text_field[0] == 'Y' || text_field[0] == 'yes') {
        printf("you have chosen to tiki\n");
        sleep(2);
    printf("after that jzrblx continued to code and play games and tiki\n");
    }
    else {
        printf("you have chosen not to tiki\n");
        sleep(3);
        printf("after that jzrblx continued to code and play games but did not tiki\n");
    }
    sleep(2);
    printf("the end\n");
    sleep(2);
    return 0;
}
// tiki tiki tiki matih tiki taka tiki tiki tiki tiki ti insert blox aurafarm