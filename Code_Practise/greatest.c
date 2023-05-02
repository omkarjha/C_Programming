#include <stdio.h>

int main()
{
     int num1, num2, num3, num4, max;

     // Take input from the user
     printf("Enter four numbers: \n");
     scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

     // Assume the first number to be the maximum initially
     max = num1;

     // Compare the remaining numbers with the assumed maximum
     if (num2 > max)
          max = num2;
     if (num3 > max)
          max = num3;

     if (num4 > max)
          max = num4;

     // Print the result
     printf("The greatest number is %d", max);

     return 0;
}
