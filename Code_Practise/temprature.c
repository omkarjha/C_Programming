//(C * 9 / 5) + 32 = F
//(F - 32) * 5 / 9 = C

#include <stdio.h>
float convert(float temp, char scale)
{
    float convertedTemp;
    switch (scale)
    {
    case 'c':
    case 'C':
        convertedTemp = (temp - 32) * 5 / 9;
        break;
    case 'f':
    case 'F':
        convertedTemp = (temp * 9 / 5) + 32;
        break;
    default:
        printf("Invalid Choice!!!");
        convertedTemp = 0;
        break;
    }
    return convertedTemp;
}
int main()
{
    char choice;
    float inputTemp;
    float new;

    printf("Enter the Temprature:");
    scanf("%f",&inputTemp);
    printf("Enter the choice :");
    scanf(" %c",&choice);

    new = convert(inputTemp,choice);
    printf("Converted Temprature : %.2f \n",new);


    return 0;
}