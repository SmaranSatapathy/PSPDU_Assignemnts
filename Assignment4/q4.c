#include <stdio.h>
#define density 1.23

double calculate(int *V,double CD,double A)
{
    return 0.5*CD*density*A**V**V;
}

int main()
{
    int V=0;
    double CD,A,F;
    printf("Enter CD: ");
    scanf("%lf",&CD);
    printf("Enter Area: ");
    scanf("%lf",&A);

    for(;V<=40;V+=5)
    {
        F=calculate(&V,CD,A);
        printf("Drag force for %d m/s is: %.3lf\n",V,F);
    }
}