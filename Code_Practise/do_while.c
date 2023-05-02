#include <stdio.h>

int main() {
    int input;
    do {
        printf("Enter an integer: ");
        if (scanf("%d", &input) != 1) {
            printf("Invalid input. Please enter an integer.\n");
            while (getchar() != '\n'); // Clear input buffer
        }
    } while (input < 0 || input > 100); // Continue loop until valid input is entered
    printf("You entered: %d\n", input);
    return 0;
}
