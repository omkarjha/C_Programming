#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;
    int height;
    printf("Enter the radius of the circle :");
    scanf("%d",&radius);
    printf("The area of this circle is %f\n", pi * radius * radius);
    printf("Enter the height of the circle :");
    scanf("%d",&height);
    printf("Volume of this cylinder is %f\n", pi * radius * radius * height);
    return 0;
}