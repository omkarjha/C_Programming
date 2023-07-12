#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int c, d, s;
    c = 10;
    d = 5;
    s = sum(c, d);
    printf("%d", s);
    return 0;
}