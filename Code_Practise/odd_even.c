#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number which needs to be checked for odd or even :");
    scanf("%d",&a);

    if(a%2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }
}