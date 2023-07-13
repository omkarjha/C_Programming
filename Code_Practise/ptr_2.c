#include<stdio.h>
void address(int a)
{
    printf("The address of variable is :%u\n",&a);
}
int main()
{
    int i;
    printf("Enter the value:");
    scanf("%d",&i);
    address(i);
    printf("The address of variable is :%u\n",&i); 
    return 0;
}