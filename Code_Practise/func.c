#include <stdio.h>

int sum()
{
    int a = 0;
    int num;

    for (num = 0; num <= 10; num++)
    {
        a += num; // a += num --> a = a + num
    }

    return a; //The sum function is returning the value a
}

int main()
{
    int b = sum();
    printf("Sum of digits from 1 to 10 = %d\n", b);

    return 0;
}