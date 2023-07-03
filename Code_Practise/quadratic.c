#include <stdio.h>
#include <math.h>

// D-> Dicriminant
// a^2x+bx+c = 0
// D=b^2-4ac

int main()
{
    double a, b, c, d, root1, root2;
    double real, imaginary;
    printf("Enter the coefficients of the quadratic equation :\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a * c;
    printf("The discriminant of the equation is : %.2lf\n", d);

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (d = 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf", root2);
    }
    else
    {
        real = -b / (2 * a);
        imaginary = sqrt(-d) / (2 * a);
        printf("root1 = %.2lf+%2lfi and root2 = %.2lf-%.lfi", real, imaginary, real, imaginary);
    }
}