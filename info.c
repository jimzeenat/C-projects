#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {

    int i = 1;

    system("cat /etc/os-release");

        printf("do you want to see kernel info (y/n)\n");
    char text_field[256];
    scanf("%255s", text_field);
    if (text_field[0] == 'y') {
        system("uname -a");
    } else {
        printf("ok bye\n");
        return 1;
    }

        printf("do you want to see cpu info (y/n)\n");
    scanf("%255s", text_field);
    if (text_field[0] == 'y') {
        system("lscpu");
    } else {
        printf("ok bye\n");
        return 1;
    }

        printf("do you want to see memory info (y/n)\n");
    scanf("%255s", text_field);
    if (text_field[0] == 'y') {
        system("free -h");
    } else {
        printf("ok bye\n");
        return 1;
    }

        printf("do you want to see disk info (y/n)\n");
    scanf("%255s", text_field);
    if (text_field[0] == 'y') {
        system("df -h");
    } else {
        printf("ok bye\n");
        return 1;
    }

        printf("do you want to see network info (y/n)\n");
    scanf("%255s", text_field);
    if (text_field[0] == 'y') {
        system("ifconfig");
        system("ip a");
    } else {
        printf("ok bye\n");
        return 1;
    }

        printf("do you want to see fastfetch (y/n)\n");
    scanf("%255s", text_field);
    if (text_field[0] == 'y') {
        system("fastfetch");
    } else {
        printf("ok bye\n");
        return 1;
    }

        printf("do you want to see installed packages (y/n)\n");
    scanf("%255s", text_field);
    if (text_field[0] == 'y') {
        system("pacman -Q");
    } else {
        printf("ok bye\n");
        return 1;
    }

        printf("do you want to see running processes (y/n)\n");
    scanf("%255s", text_field);
    if (text_field[0] == 'y') {
        system("ps aux");
    } else {
        printf("ok bye\n");
        return 1;
    }

        printf("do you want to see your gpu (y/n)\n");
    scanf("%255s", text_field);
    if (text_field[0] == 'y') {
        system("lspci | grep VGA");
        printf("alright thats all i got\n");
        sleep(5);
        printf("thats it idk why youre still here\n");
        printf("%i\n", i);
    } else {
        printf("ok bye\n");
        return 1;
    }

    return 0;
}
//printf ("haha i included a total of %d comments in this file\n", i);