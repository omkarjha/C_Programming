#include <stdio.h>

int main() {
    int size;
    int numbers[50]; // Array to store numbers
    int i = 0; // Counter variable
    printf("Enter the size of array:");
    scanf("%d",&size);
    // printf("Enter %d numbers:\n",size);

    do {
        scanf("%d", &numbers[i]);
        i++;
    } while (i < size);

    printf("The numbers you entered are:\n");
    
    for (i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");

    return 0;
}