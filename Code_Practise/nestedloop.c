// *\n
// **\n
// ***\n
// ****\n
// *****\n
// one varaible for up to down --> i
// one variable for left to right --> j

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}