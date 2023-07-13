#include <stdio.h>

int main()
{
    int size;
    int i;
    int marks[100];
    printf("Enter size of array:");
    scanf("%d", &size);
    printf("Enter the marks of the student:\n");
    for (i = 0; i <= size; i++)
    {
        scanf("%d\t", &marks[i]);
    }
    printf("The marks for the student is:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", marks[i]);
    }
    return 0;
}