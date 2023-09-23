// Write a function that takes an array of number as input and returns the largest number in the array

#include <stdio.h>
int array(int size)
{
    int i, arr[50];
    printf("Enter the elements :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array elements:");
    for (i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }

    return arr;
}

int largestarr(int arr2[],int size)
{
    int i;
    int max = arr2[0];
    for (i = 0; i < size; i++)
    {
        if (max > arr2[i])

            max = arr2[i];
    }
    printf("The maximum element from the array is : %d",max);
}

int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d", &n);
    int arr1 = array(n);
    largestarr(arr1,n);
    return 0;
}