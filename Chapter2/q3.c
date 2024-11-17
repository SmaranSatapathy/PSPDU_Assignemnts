#include <stdio.h>
#include <math.h>

int main()
{
    double T,t;
    int hrs,mins;
    printf("Enter hours elapsed:");
    scanf("%d",&hrs);
    printf("Enter minutes elapsed: ");
    scanf("%d",&mins);

    t=hrs+(mins/60.0);
    printf("Totals time: %lf\n",t);
    T=((4*pow(t,2))/(t+2))-20;
    printf("Answer is: %lf",T);
}