#include <stdio.h>

int main()
{
     int n,i;
     int fact = 1;
     printf("Enter the number whose factorial needs to be calculated :");
     scanf("%d",&n);

     for(i=1;i<=n;i++)
     {
          fact *= i;
     }
     printf("Factorial of %d is : %d",n,fact);
     return 0;
}