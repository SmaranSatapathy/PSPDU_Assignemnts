#include <stdio.h>

int main()
{
    double u=10,v=2.5,a,t;
    a=(u-v)*60;
    printf("Retardation is: %.2lf mi/hr2.\n",a);
    t=u/a;
    printf("Time to stop: %.2lf hr.",t);
}