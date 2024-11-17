#include <stdio.h>

int main()
{
    int VTBI,time;
    double rate;
    printf("Enter VTBI: ");
    scanf("%d",&VTBI);
    printf("Enter time in minutes: ");
    scanf("%d",&time);

    rate=(VTBI*60)/time;
    printf("VTBI is: %d.\n Rate is: %lf.",VTBI,rate);
}