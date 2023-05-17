#include <stdio.h>

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

float divide(int x, int y)
{
    if (y != 0)
    {
        return (float)x / y;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int main()
{
    int a, b;
    int choice;
    printf("Menu-Driven Calculator!\n");

    while (1)
    {
        printf("\nOperations:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Thank you for using the Calculator Program!\n");
            break;
        }
        printf("Enter the two numbers on which the operations going to happen :\n");
        printf("1.");
        scanf("%d", &a);
        printf("2.");
        scanf("%d", &b);

        switch (choice)
        {
        case 1:
            printf("Result: %d\n", add(a,b));
            break;
        case 2:
            printf("Result: %d\n", subtract(a,b));
            break;
        case 3:
            printf("Result: %d\n", multiply(a,b));
            break;
        case 4:
            printf("Result: %.2f\n", divide(a,b));
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    }

    return 0;
}
