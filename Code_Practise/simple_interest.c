#include <stdio.h>

int main()
{
     int principal, rate, years;
     int simpleInterest;
     printf("Enter the principal amount :");
     scanf("%d", &principal);
     printf("Enter the rate of interest :");
     scanf("%d", &rate);
     printf("Enter the time period for the interest :");
     scanf("%d", &years);
     simpleInterest = (principal * rate * years) / 100;
     printf("The value of Simple Interest is %d", simpleInterest);
     return 0;
}