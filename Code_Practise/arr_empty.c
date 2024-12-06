#include <stdio.h>
#include <stdbool.h>

bool ifarremp(int size)
{
    if (size == 0)
        return true;
    else
        return false;
}
int main()
{
    int num, i;
    int arr[50];
    printf("Enter the number of elements in the array:");
    scanf("%d", &num);
    if (ifarremp(num) == true)
        printf("The array is empty");
    else
        printf("Enter the elements of the array : \n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    return 0;
}