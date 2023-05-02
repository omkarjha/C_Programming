#include <stdlib.h>
#include <stdio.h>
int main()
{
     int i,a[1000],num;
     printf("Enter the Upper Limit:");
     scanf("%d",&num);

     FILE *fptr;
     fptr = fopen("data.txt","w");
     for(i=0;i<num;i++)
     {
          a[i]=rand();
          if(a[i]>=0&&a[i]<=num)
          {
               a[i]=-a[i];
          }
          fprintf(fptr,"%d\n",a[i]);
     }
     fclose(fptr);
}