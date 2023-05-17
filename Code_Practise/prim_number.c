#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1) 
    {
        return 0;  // not a prime number
    }

    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
        {
            return 0;  // not a prime number
        }
    }

    return 1;  // prime number
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}