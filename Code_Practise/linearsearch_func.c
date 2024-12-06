#include <stdio.h>
#include <stdlib.h>

int linearsearch(int size, int ele) // Function Declaration
{
    int i, num;
    int arr[50];
    printf("enter the numbers:");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the array is:");
    for (i = 0; i < size; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
    // printf("the element you want to search is:")
    for (i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            printf("the element is present at position:%d", arr[i]);
        }
    }
}
int main()
{
    int size, ele;
    printf("enter the size of the array");
    scanf("%d", &size);
    printf("Enter the element u wanna search :");
    scanf("%d", &ele);

    linearsearch(size, ele); // Function Call
}
