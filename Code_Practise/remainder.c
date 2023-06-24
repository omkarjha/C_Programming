#include<stdio.h>

int main()
{
    int a,b;
    float quotient,rem;
    printf("Enter a :");
    scanf("%d",&a);
    printf("Enter b :");
    scanf("%d",&b);

    quotient = a/b;
    rem = a%b;

    printf("QUotient %f \n",quotient);
    printf("Remainder %f \n",rem);

    return 0;


}