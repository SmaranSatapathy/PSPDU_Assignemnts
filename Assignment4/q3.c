#include <stdio.h>
#include <math.h>

void square_root_calculator(int N,double *LG,double *NG)
{
    while(1)
    {
        *NG=0.5*(*LG+(N/ *LG));
         if(fabs(*NG-*LG)>0.005)
         *LG=*NG;
         else
         break;
    }
}

int main()
{
    int N;
    double LG=1.0,NG=100;

    printf("Enter number: ");
    scanf("%d",&N);
    square_root_calculator(N,&LG,&NG);
    printf("Square root of %d is: %lf",N,NG);
}