#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float temp, velocity, wcf;

    printf("Enter air temperature in Fahrenheit: ");
    scanf("%f", &temp);

    printf("Enter the wind speed in mph: ");
    scanf("%f", &velocity);

    wcf = 35.74 + 0.6215*temp + (0.4275*temp - 35.75) * pow(velocity,0.16);

    printf("Wind Chill Factor in Fahrenheit: %.2f",wcf);

    return 0;
}