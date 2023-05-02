#include<stdio.h>

int main()
{
     int a;
     printf("Enter a random number :");
     scanf("%d",&a);

     if(a%2==0)
          printf("The random number is even");
     else
          printf("The random number is odd");
}