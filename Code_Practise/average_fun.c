#include <stdio.h>
#include <stdlib.h>

int average(int);

int main()
{
     int n;
     int avg, i;
     printf("Enter the total number : ");
     scanf("%d", &n);

     int *arr = (int *)malloc(n * sizeof(int));

     printf("Enter the elements whose average needs to be calculated :\n");
     for (i = 1; i <= n; i++)
     {
          scanf("%d", &arr[i]);
     }
     printf("The elements are:\n");
     for (i = 1; i <= n; i++)
     {
          printf("%d \t", arr[i]);
     }
     printf("\n");
     average(n);
}

int average(int n)
{
     int avg, i, sum = 0;
     int *arr = (int *)malloc(n * sizeof(int));
     for (i = 0; i <= n; i++)
     {
          /* code */
          sum += arr[i];
     }
     avg = sum / n;
     printf("The average of is : %d", avg);
}