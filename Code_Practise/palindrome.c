#include <stdio.h>

int main()
{
    int num,rem;
    int sum = 0;
    int temp;

    printf("Enter the number for which palindrome needs to be checked :");
    scanf("%d",&num);
    temp = num;

    while(num>0)
    {
        rem = num%10;
        sum = (sum*10)+rem;
        num = num/10;
    }
    if (temp == sum)
    {
        /* code */
        printf("%d is a palindrome number.",temp);
    }
    else
    {
        /* code */
        printf("%d  is not a palindrome number.",temp);
    }

}

