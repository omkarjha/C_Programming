#include <stdio.h>

int main()
{
    int side;
    int area;
    char units[2];

    printf("The unit of the square is (in cm,m,km):");
    scanf("%s",units);
    printf("Enter the side of the square:");
    scanf("%d", &side);
    printf("The side of the square is : %d %s \n",side,units);

    area = side * side;

    printf("The area of the square is : %d sq %s",area,units);

}