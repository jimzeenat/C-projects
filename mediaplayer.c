#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int main() {
    printf("peanits measurement was here\n");
    char text_field[256];
    char path[256];
    char command[512];
    snprintf(path, sizeof(path), "%s/c.mp3", getenv("HOME"));

    scanf("%255s", text_field);

    printf("well %s DOES NOT MATTER IN THIS FUNCTION YOU [__]\n", text_field);

    sleep(1);
    FILE *file_ptr;
    file_ptr = fopen(path, "r");
    
    if (file_ptr == NULL) {
        printf("no file found lil boiiiiiiiiiii.\n");
        printf("make sure you have a file path that is ~/c.mp3 lil boiiiioiiiiiii \n");
        exit(1);
    }

    else {
        printf("found BOIIIIII\n");
        snprintf(command, sizeof(command), "vlc --gain 0.5 %s", path);
        system(command);
        printf("press ctrl c to stop\n");
    }

    return 0;
    
}