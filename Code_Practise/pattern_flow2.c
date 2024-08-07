#include<stdio.h>

int main()
{
    int i, j;

    int n;

    printf("Enter the height of the pattern :");
    scanf("%d",&n);


    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for ( j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}