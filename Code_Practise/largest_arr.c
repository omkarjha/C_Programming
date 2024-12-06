// Write a function that takes an array as input and find the largest element in the array.
#include <stdio.h>

int findLargestNumber(int arr[], int size)
{

    if (size == 0)
    {
        printf("The array is empty\n");
        return -1;
    }

    int largest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("Invalid array size\n");
        return 1;
    }

    int numbers[50];

    printf("Enter %d numbers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int largestNumber = findLargestNumber(numbers, size);

    if (largestNumber != -1)
    {
        printf("The largest number is: %d\n", largestNumber);
    }

    return 0;
}
