#include <stdio.h>

int main() {
    int i, j,n;

    printf("Enter the number of times you want the pattern to be printed:");
    scanf("%d",&n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
