#include <stdio.h>

int fact(int num)
{
    int f = 1;
    for (int i = 1; i <= num; i++)
    {
        f *= i;
    }
    return f;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += fact(i);
    }

    printf("The sum of factorials of %d numbers is: %d\n", n, sum);

    return 0;
}
