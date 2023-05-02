#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    printf("Divisibility test returns: %d\n", num%97);
}