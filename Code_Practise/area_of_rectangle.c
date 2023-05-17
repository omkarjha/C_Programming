#include <stdio.h>

int main()
{
     int length,breadth,area;
     printf("Enter the length of the rectangle : ");
     scanf("%d",&length);
     printf("\n");
     printf("Enter the breadth of the rectangle : ");
     scanf("%d",&breadth);
     printf("\n");
     area = length * breadth;
     printf("The area of the rectangle is : %d",area);
     printf("\n");

}