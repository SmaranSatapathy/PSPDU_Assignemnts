#include <stdio.h>

int main()
{
    double initial_cost,annual_fuel_cost,tax_rate,total_cost;

    printf("Enter initial cost:");
    scanf("%lf",&initial_cost);
    printf("Enter annual_fuel:");
    scanf("%lf",&annual_fuel_cost);
    printf("Enter tax rate:");
    scanf("%lf",&tax_rate);

    total_cost=initial_cost+(5*annual_fuel_cost)+(5*(tax_rate*initial_cost));
    printf("Total cost of house is: $ %.3lf",total_cost);
    
}