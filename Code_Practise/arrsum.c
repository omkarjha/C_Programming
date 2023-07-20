#include <stdio.h>

int sumarr(int arr[], int size)
{
    int i;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size, i,arrsum;
    int array[100];

    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    arrsum = sumarr(array, size);
    printf("Sum of the elements of the array is :%d", arrsum);
}
