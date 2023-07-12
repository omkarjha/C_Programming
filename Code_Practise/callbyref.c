#include <stdio.h>

int main()
{
    int a = 100;
    int b = 400;
    printf("Before swap,a : %d\n", a);
    printf("Before swap,b : %d\n", b);
    swap(&a, &b); // Function Call using Call by reference
    printf("After swap,a : %d\n", a);
    printf("After swap,a : %d\n", b);
    return 0;
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}