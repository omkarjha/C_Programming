#include <stdio.h>

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3};
    int i;
    int arr3[5];
    // scanf("%d",&arr3[0]);
    // scanf("%d",&arr3[1]);
    // scanf("%d",&arr3[2]);
    // scanf("%d",&arr3[3]);
    // scanf("%d",&arr3[4]);
    // printf("%d\n", arr1[0]);
    // printf("%d\n", arr1[1]);
    // printf("%d\n", arr1[2]);
    // printf("%d\n", arr1[3]);
    // printf("%d\n", arr1[4]);
    
    printf("Enter the elements of the array :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr3[i]);
    }
    printf("The array is :\n");
    for (i = 0; i < 5; i++)
    {
        /* code */
        printf("%d\t", arr3[i]);
    }

    return 0;
}

// block of 5*4 bytes of memory is assigned to the arr2 of which only 3*4 is used.