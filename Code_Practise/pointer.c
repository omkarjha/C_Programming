#include<stdio.h>

int main()
{
    int a;
    int *p;
    int **q;

    scanf("%d",&a);

    p = &a;
    q = &p;

    printf("%d\n",a);
    printf("%u\n",p);
    printf("%u\n",q);
    // printf("%d",a);
    return 0;
}