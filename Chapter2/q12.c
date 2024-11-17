#include <stdio.h>

int main()
{
    int v,s;
    double t,a;
    printf("Enter speed in km/hr: ");
    scanf("%d",&v);
    printf("Enter distance in metres: ");
    scanf("%d",&s);

    v=(v*5)/18.0;

    a=(v*v)/(2.0*s);
    printf("Acceerattion is: %lf m/s2.\n",a);

    t=v/a;
    printf("time is: %lf s.",t);
}