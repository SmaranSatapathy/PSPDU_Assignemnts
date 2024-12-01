#include <stdio.h>
#include <math.h>

void instructions()
{
    printf("rite a program that calculates the speed of sound ( a ) in air of a given temperature T (°F).\n");
}

void calculate(double temperature)
{
    double air_speed;
    air_speed=1086*sqrt((5*temperature+297)/247);
    printf("Air speed is: %.3lfft/sec.",air_speed);
}

int main()
{
    double temp;
    instructions();
    printf("Enter temperature: ");
    scanf("%lf",&temp);
    calculate(temp);
}