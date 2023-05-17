#include <stdio.h>

void fibonacci(int n)
{
    int n1 = 0, n2 = 1, nextTerm;

    printf("Fibonacci Sequence up to %d terms:\n", n);

    if (n >= 1)
    {
        printf("%d ", n1);
    }

    if (n >= 2)
    {
        printf("%d ", n2);
    }

    for (int i = 3; i <= n; i++)
    {
        nextTerm = n1 + n2;
        printf("%d ", nextTerm);
        n1 = n2;
        n2 = nextTerm;
    }

    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of terms for the Fibonacci sequence: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
