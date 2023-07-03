#include <stdio.h>

int main()
{
    int i ;
    for(i=1;i<=10;i++)
    {
        printf("%d\t",i);
    }
    printf("%d\t",i);
    return 0;
}



// 1 2 3(goto abc) 4     abc - > 5 6 7

//1 2 3 5 6 7 4

// printf("1");
// printf("2");
// printf("3");
// printf("4");
// printf("5");
// printf("6");
// printf("7");
// printf("8");
// printf("9");
// printf("10");