#include <stdio.h>

int main()
{
     int i,n;
     int mul = 0;
     printf("The number whose multiplication table to be formed :");
     scanf("%d",&n);

     for(i=1;i<11;i++)
     {
          mul = i*n;
          printf("%d * %d = %d \n",n,i,mul);
     }
     printf("\n");
}