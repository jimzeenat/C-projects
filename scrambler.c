#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=~`[]{}|;:',.<>?/|\""; // define the character set to use for scrambling

    printf("choose an output length (0-256):\n");
    int length;
    if (scanf("%d", &length) != 1 || length < 0 || length > 256) {
        printf("invalid length\n");
        return 1;
    }
    
    srand(time(NULL)); // seed the scrambler

    char output[length + 1]; // create an output buffer with the specified length
    
    for ( int i = 0; i < length; i++) {
        output[i] = charset[rand() % (sizeof(charset) - 1)]; // randomly select a character from the charset
    }
    output[length] = '\0'; // null-terminate the output string
    printf("scrambled output: %s\n", output);

}