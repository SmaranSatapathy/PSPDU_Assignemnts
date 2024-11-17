#include <stdio.h>
#define g 9.80
#define mag 1000
int main()
{
    int ht;
    double cub_metres_water,work,power;

    printf("Enter height:");
    scanf("%d",&ht);
    printf("Enter volume of water: ");
    scanf("%lf",&cub_metres_water);
    work=(mag*cub_metres_water)*g*ht;
    printf("Work is: %lf J\n",work);
    power=work/10e6;
    printf("Power is: %lfMW\n",power);
    power=(0.90*work)/10e6;
    printf("Power actually: %lf MW.",power);
}