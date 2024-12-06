#include <stdio.h>

int main()
{
    char s[30];
    int i, size;

    printf("Enter the size of the string:");
    scanf("%d", &size);

    printf("ENerthe elements of the string are");
    for (i = 0; i < size; i++)
        scanf(" %c", s[i]);
    printf("The string is:");
    for (i = 0; i < size; i++)
        printf(" %c", s[i]);
}