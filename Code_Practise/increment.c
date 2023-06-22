#include<stdio.h>

int main()
{
    int a = 10;
    printf("%d \n",a);   //10
    printf("%d \n",++a); //11
    printf("%d \n",a++); //11 a=12
    printf("%d \n",--a); //11 a=11
    printf("%d \n",a--); //11 a=10
    printf("%d \n",a);   //a=10
    // printf("%d",a);
}