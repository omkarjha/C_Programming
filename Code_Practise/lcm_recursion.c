#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int lcm(int a, int b)
{
    // LCM * GCD = a * b
    return (a * b) / gcd(a, b);
}

int main()
{
    int a, b;

        printf("Enter the two numbers on which the operations going to happen :\n");
        printf("1.");
        scanf("%d",&a);
        printf("2.");
        scanf("%d",&b);

    printf("LCM of %d and %d is %d\n",a,b,lcm(a,b));

    return 0;
}
