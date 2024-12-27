#include <stdio.h>

int main()
{
    const double a=3.592,b=0.0427,R=0.08206;
    int initial_vol,final_vol,temp,x_factor,i;
    double n,pressure;

    printf("Enter initial volume: ");
    scanf("%d",&initial_vol);
    printf("Enter final volume: ");
    printf("%d",&final_vol);
    printf("Enter temerature in Kelvin: ");
    scanf("%d",&temp);
    printf("Enter x-factor value: ");
    scanf("%d",&x_factor);
    printf("Enter number of  moles:");
    scanf("%lf",&n);


    printf("%lf moles of carbon dioxide at %d Kelvin.",n,temp);
    printf("Volume (ml) \t \t Pressure (atm)\n");
    for(i=initial_vol;i<=final_vol;i+=x_factor)
    {
        pressure=((n*R*temp)/(i-b*n)-((a*n*n)/(i*i)));
        printf("%d \t \t \t %lf\n",i,pressure);
    }

}