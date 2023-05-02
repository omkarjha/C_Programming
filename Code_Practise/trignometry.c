#include <stdio.h>
#include <math.h>

int main()
{
    float deg, radian;
    float Pi = 3.14159;

    printf("Enter angle in degree :\n");
    scanf("%f",&deg);

    radian = deg * (Pi / 180.0);

    printf("Sin(%f) = %f\n", deg, sin(radian));
    printf("Cos(%f) = %f\n", deg, cos(radian));
    printf("Tan(%f) = %f\n", deg, tan(radian));
    printf("Cosec(%f) = %f\n", deg, 1/sin(radian));
    printf("Sec(%f) = %f\n", deg, 1/cos(radian));
    printf("Cot(%f) = %f\n", deg, 1/tan(radian));

    return 0;
}