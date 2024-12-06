#include <stdio.h>

int main()
{
    int i,num,arr[10];
    int sum = 0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&num);
    printf("Enter the elements of the array : \n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        sum += arr[i];
    }
    printf("The sum of the elements of the array is : ");
    for(i=0;i<num;i++)
    {
        printf("%d \t",arr[i]);
    }printf("\n");

    printf("%d",sum);
}