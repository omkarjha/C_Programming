#include <stdio.h>

struct Vector
{
    int x;
    int y;
};

struct Vector SumVector(struct Vector vector1, struct Vector vector2)
{
    struct Vector result;
    result.x = vector1.x + vector2.x;

    result.y = vector1.y + vector2.y;

    return result;
}

int main()
{
    struct Vector vector2d;

    struct Vector vector1, vector2;

    printf("Enter X: coordinate :");
    scanf("%d", &vector1.x);

    printf("Enter Y: coordinate :");
    scanf("%d", &vector1.y);

    printf("Enter X: coordinate :");
    scanf("%d", &vector2.x);

    printf("Enter Y: coordinate :");
    scanf("%d", &vector2.y);

    struct Vector result = SumVector(vector1, vector2);

    printf("Sum : (%d,%d)\n", result.x, result.y);
}