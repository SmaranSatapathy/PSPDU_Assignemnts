#include <stdio.h>

int main()
{
    char first,last;
    int dollars,quarters,dimes,nickels,pennies,total=0,change;

    printf("Enter dollars: ");
    scanf("%d",&dollars);
    printf("Enter quarters: ");
    scanf("%d",&quarters);
    printf("Enter dimes: ");
    scanf("%d",&dimes);
    printf("Enter nickels: ");
    scanf("%d",&nickels);
    printf("Enter pennies: ");
    scanf("%d",&pennies);

    total=100*dollars+25*quarters+10*dimes+5*nickels+pennies;
    change=(total/100)%100;

    printf("Total in cents: %d\n",total);
    printf("Changes are: %d",change);
}