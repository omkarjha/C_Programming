#include<stdio.h>

int main()
{
    int a;
    printf("Enter the value for the variable:");
    scanf("%d",&a);
    int *ptr;
    ptr = &a;
    printf("The value of the address : %u\n",ptr);
    printf("The value of the variable : %d\n",*ptr);



    return 0;
}