#include <stdio.h>
#include <math.h>

int main()
{
    double pi_value=0;
    int x=2;

    for(int i=1;i<=99;i+=2,x++)
    {
        pi_value=pi_value+(pow(-1,x)*(1.0/i));
    }

    pi_value=4*pi_value;
    printf("The value of pi is: %lf\n",pi_value);
    return 0;
}