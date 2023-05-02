#include<stdio.h>
#include<math.h>
int main()
{
    float L1, L2, G1, G2, distance, distance_km, distance_nm, dL, dG;

    printf("Enter the co-ordinate of first place: ");
    scanf("%f %f", &L1, &G1);

    printf("Enter the co-ordinate of second place: ");
    scanf("%f %f", &L2, &G2);

    dL = L2-L1;
    dG = G2-G1;
    distance = sqrt((dL*dL)+(dG)*(dG));
    distance_km = distance*100;

    printf("The distance between in kilometer: %.2f km", distance_km);

    distance_nm = distance_km/1.852;

    printf("\nThe distance between in nautical miles: %.2f nm", distance_nm);

    return 0;
}