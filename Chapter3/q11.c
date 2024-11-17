#include <stdio.h>
#include <math.h>

double speeds_ratio(double M,double m)
{
    return pow(M/m,1.0/5.0);
}

int main()
{
    double M,m,ans;
    printf("Enter Maximum speed in rpms: ");
    scanf("%lf",&M);
    printf("Enter minimum speed in rpms: ");
    scanf("%lf",&m);
    ans=speeds_ratio(M,m);
    printf("The ratio between successive speeds of a six-speed gearbox \
with maximum speed %.2lf rpm and minimum speed %.2lf \
rpm is %.2lf.",M,m,ans);
}