#include <stdio.h>
int main()
{
    int i, size;
    int arr[50];

    printf("Enter the size of the array:");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d\t", arr[i]);
    }
}

// 3
//  0 1 2 i++,i=0
//  2 1 0 i--,i=(size-1) or 2
//