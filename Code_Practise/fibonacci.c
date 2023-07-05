#include<stdio.h>
int fib(int m)
{
    if(m<=1)
    // printf Omkar
        return m;
    else
        return fib(m-1) + fib(m-2);

}
int main()
{
    int n;
    int element;
    printf("Enter the value of n:");
    scanf("%d",&n); 
    element = fib(n);

    printf("The %dth element of the series : %d \n",n,element);

    return 0;
}