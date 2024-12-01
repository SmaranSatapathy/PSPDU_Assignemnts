#include <stdio.h>
#define btu 5.8e5
int main()
{
    int gallons;
    double efficeincy,ans;

    printf("Enter oil: ");
    scanf("%d",&gallons);
    printf("Enter efficiency: ");
    scanf("%lf",&efficeincy);
    ans=(btu*gallons)/42;
    ans=(efficeincy/100)*ans;
    printf("Net BTU transferred: %lf",ans);
}