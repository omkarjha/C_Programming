#include <stdio.h>

//Create an user input array where you take the size from the user and perform linear search on an element.

int main()
{
    int arr[50];
    int i;
    int size;
    printf("Enter the size of the array :");
    scanf("%d",&size);

    printf("Enter the elements of the array :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The array is :");
    for(i=0;i<size;i++)
    {
        printf("%d \t",arr[i]);
    }

    

}