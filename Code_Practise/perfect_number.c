#include <stdio.h>

int main()
{
    int num,rem,i;
    int sum = 0;

    printf("Enter the number:");
    scanf("%d",&num);

    for(i=1;i<num;i++)
    {
        rem = num%i;
        if(rem == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        /* code */
        printf("%d is a Perfect Number",num);
    }
    else
    {
        printf("%d isn't a perfect number",num);
    }
    
    
}