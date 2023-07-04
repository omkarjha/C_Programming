// F = G*(m1*m2)/d^2
// m2 = 5.972e24
// g = 9.8
// D = user input 
// m1 = user input 

#include<stdio.h>

double forceAttraction(double m1,int d)
{
    float g = 9.8;
    double m2 = 5.972e24;
    double force;

    force = (g*m1*m2)/(d*d);

    return force;

}

int main()
{   
    double mass,dist;
    double F;

    printf("Enter the mass m :");
    scanf("%lf",&mass);
    printf("Enter the distance d:");
    scanf("%lf",&dist);

    F = forceAttraction(mass,dist);

    printf("The force beween the body and the earth is : %lf",F);
    
    return 0;
}