// *
// **
// ***
// ****
// *****

// no.of rows -> 5
// no.of columns -> 5

// rows and column
// i and j
// i will iterate in the column section
// j will iterate in the rows section

#include <stdio.h>

int main()
{
    int row, col;
    printf("enter the row :");
    scanf("%d", &row);
    printf("Enter the columns :");
    scanf("%d", &col);

    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// ******
// *****
// ****
// ***
// **
// *