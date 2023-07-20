#include <stdio.h>

int count_positive(int arr[], int size)
{
    int count = 0;
    int i;
    for (i = 0; i < size; i++) // arr[0],arr[1]
    {
        if (arr[i] > 0)
        {
            count++; // if
        }
    }
    return count;
}

int main()
{
    int i;
    int arr1[50];
    int size;
    int positive;

    printf("Enter the size of the array:");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr1[i]);
    }
    printf("\n");

    positive = count_positive(arr1, size);

    printf("The no. of positive elemnets in the array is : %d", positive);

    return 0;
}

// a = 5
// if(a>0)


//Start
//create a function to count positive
//take variable to intialize array,for loop and size
//take input from user
//push the array as argument to function
//function definition
//intialize count
//use condition check positive and increase count if positive
//return count


