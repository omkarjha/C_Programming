#include<stdio.h>
#include <stdbool.h>

bool ifarremp(int arr[], int size)
{
    if(size == 0)
        return true;
    else
        return false;
}
int main()
{   
    int num,i;
    int arr[50];
    printf("Enter the number of elements in the array:");
    scanf("%d",&num);
    printf("Enter the elements of the array : \n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(ifarremp(arr[50],num))
        printf("The array is empty");
    else
        printf("The array is not empty");
    return 0;
}