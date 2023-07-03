#include <stdio.h>

int main()
{
    int i;
    float f;
    double d; 
    char c;

    //(sizeof) -> %zu

    printf("Size of int %zu bytes\n",sizeof(i));
    printf("Size of float %zu bytes\n",sizeof(f));
    printf("Size of double %zu byte\n",sizeof(d));
    printf("Size of char %zu byte\n",sizeof(c));

    return 0;
}