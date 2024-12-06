#include <stdio.h>

int sumofdigits(int number)
{
    int sum = 0;

    if (number < 10)
    {
        return(number);
    }
    else
    {
        while (number>0)
        {

            sum += number % 10;
            number /= 10;
        }
    }
    return sumofdigits(sum);
}
int main()
{
    int a;

    printf("Enter the number whose sum of digits is required:");
    scanf("%d", &a);

    int result;

    printf("The sum of digits is : %d", result = sumofdigits(a));
}
