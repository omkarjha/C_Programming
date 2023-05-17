#include <stdio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
double calculateSeries(int n)
{
    double sum = 0.0;

    for (int i = 1; i <= n; i++)
    {
        int fact = factorial(i);
        double term = (double)fact / (i * i);
        sum += term;
    }

    return sum;
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    double seriesSum = calculateSeries(n);

    printf("Sum of the series: %.2lf\n", seriesSum);

    return 0;
}
