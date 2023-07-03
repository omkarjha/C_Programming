#include <stdio.h>

int main()
{
    //(C * 9 / 5) + 32 = F
    //(F - 32) * 5 / 9 = C 
    float fh, cl;

    char choice;

    printf("Press C for convert Fahrenheit to Celsius : \n");
    printf("Press F for convert Celsius to Fahrenheit : \n");

    printf("Enter your choice :");
    scanf("%c", &choice);

    if(choice == 'c' || choice == 'C' )
    {
        printf("Enter temprature in Fahrenheit scale :");
        scanf("%d",&fh);
        cl = (fh - 32) * 5 / 9;
        printf("Temprature in Celsius : %d",cl); 
    }
}