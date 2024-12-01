#include <stdio.h>

int main()
{
    double v,s,a,t;
    printf("Enter velocity of aircraft in km/hr: ");
    scanf("%lf",&v);
    v=(v*5)/18;
    printf("Speed in m/s is: %lf\n",v);
    printf("Enter distance covered in metres: ");
    scanf("%lf",&s);

    t=(2*s)/v;
    printf("Time took is: %lf s.\n",t);

    a=v/t;
    printf("Acceleration is: %lf m/s2.",a);
    return 0;
}