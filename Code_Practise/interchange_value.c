#include<stdio.h>
#include<math.h>

int main()
{
     int c,d,temp;
     printf("Enter the content of C : \n");
     scanf("%d",&c);
     printf("Enter the content of D : \n");
     scanf("%d",&d);

     temp = c;
     c = d;
     printf("The interchanged value of C : %d \n",c);
     printf("The interchanged value of D : %d \n",temp);

     return 0;
}