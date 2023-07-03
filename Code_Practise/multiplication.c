// 2 * 1  = 2
// 2 * 2  = 4
// 2 * 3  = 6
// 2 * 4  = 8
// 2 * 5  = 10
// 2 * 6  = 12
// 2 * 7  = 14
// 2 * 8  = 16
// 2 * 9  = 18
// 2 * 10  = 20

// number->a,range->n

#include <stdio.h>

int main()
{
    int a, n;
    int i;
    int prod;

    printf("enter the number whose multiplication table is needed:");
    scanf("%d", &a);
    printf("enter the range for which the multiplication table is required:");
    scanf("%d", &n);
    printf("the multiplication table is :\n");

    for (i = 1; i <= n; i++)
    {
        /* code */
        prod = a * i;
        printf("%d * %d = %d\n", a, i, prod);
    }
    return 0;
}
