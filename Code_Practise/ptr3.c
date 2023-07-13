#include <stdio.h>
void increment(int *b)
{
    (*b) *= 10;
    
}
int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d",&a);
    printf("current value,a:%d\n", a);
    int *ptr = &a;
    increment(ptr);
    printf("after increment,a:%d\n",a);
    return 0;
}
