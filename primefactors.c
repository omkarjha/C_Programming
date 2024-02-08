#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;  
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  
        }
    }

    return 1;  
}

void primeFactors(int num) {
    printf("Prime factors of %d are: ", num);
    
    for (int i = 2; i <= num; i++) {
        while (num % i == 0 && isPrime(i)) {
            printf("%d ", i);
            num /= i;
        }
    }

    printf("\n");
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    primeFactors(number);

    return 0;
}
