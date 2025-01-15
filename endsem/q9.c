#include <stdio.h>
#include <math.h>

void calculate(double *N,double *LG,double *NG)
{
    while(1)
    {
        *NG=0.5*(*LG+*N/ *LG);

        if(fabs(*NG-*LG)<0.005)
        break;

        else
        *LG=*NG;
    }
}

int main()
{
    double LG=1.0,NG,N;
    printf("Enter a number: ");
    scanf("%lf",&N);
    calculate(&N,&LG,&NG);
    printf("Answer is: %lf",NG);
}