#include <stdio.h>
int main()
{
    int arr[50][50];
    int i, j;
    int row, col;

    printf("enter the no. of rows:");
    scanf("%d", &row);
    printf("ener the no. of columns:");
    scanf("%d", &col);

    printf("Enter the elements:\n");

    // arr[0][0]
    // arr[0][1]
    // arr[1][0]
    // arr[1][1]

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The array is :\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}