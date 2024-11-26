#include <stdio.h>
#define u 10
#define v 2.5

int main()
{
    int t;
    double a;
    printf("Initial velocity is: %lf miles/hr.",u);
    printf("Final velocity is: %lf miles/hr.",v);
    t=t/60;
    printf("Time in hrs: ",t);
    a=(u-v)/t;
    printf("Acceleration is: %lf",a);

    
}