#include<stdio.h>

int main()
{
    int i = 1;

    label :
        
        printf("%d",i);
        i++;

    if (i<=10)
    {
        /* code */
        goto label;
    }
    


    return 0;
}