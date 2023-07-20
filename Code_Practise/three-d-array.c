#include <stdio.h>
int main()
{
    int i, j, k; // for iteration
    int x, y, z; // for size of the dimension
    int arr[50][50][50];

    printf("Enter the size of the 3d array:");
    scanf("%d %d %d", &x, &y, &z);
    printf("Enter the elements:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            for (k = 0; k < z; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            for (k = 0; k < z; k++)
            {
                printf("%d\t", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");
    
    printf("Address of the elements of the array is:\n");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            for (k = 0; k < z; k++)
            {
                printf("arr[%d][%d][%d] Address is : %p \n",i,j,k,&arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    printf("\n");

}

// arr[0] & arr[1]
// arr[0][0],arr[0][1],arr[1][0] & arr[1][1]
// arr[0][0][0]