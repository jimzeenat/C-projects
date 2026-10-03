#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    int term1;
    int term2;
    char operation[256];

    printf("this calculator only handles integers and basic operations because im stupid\n");

    printf("declare the first constant:\n ");
    scanf("%d", &term1);

    printf("declare your operation: (add/subtract/multiply/divide): ");
    scanf("%255s", operation);
    
    if (strcmp(operation, "divide") == 0) {
        printf("declare your second constant: ");
        scanf("%d", &term2);
        if (term2 == 0) {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        else {
            printf("the result is: %d\n", term1 / term2);
        }
    }
    else if (strcmp(operation, "add") == 0) {
        printf("declare your second constant: ");
        scanf("%d", &term2);
        printf("the result is: %d\n", term1 + term2);
    }
    else if (strcmp(operation, "subtract") == 0) {
        printf("declare your second constant: ");
        scanf("%d", &term2);
        printf("the result is: %d\n", term1 - term2);
    }
    else if (strcmp(operation, "multiply") == 0) {
        printf("declare your second constant: ");
        scanf("%d", &term2);
        printf("the result is: %d\n", term1 * term2);

        }
    }
