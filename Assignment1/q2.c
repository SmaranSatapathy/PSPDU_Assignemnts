#include <stdio.h>
#define new_toilet_usage 2
#define old_toilet_usage 15
#define usage 14
#define installation_cost 150

int main()
{
    int population,toilets;
    double totalCost,water_saved;
    printf("Enter population: ");
    scanf("%d",&population);
    printf("Population is: %d\n",population);

    toilets=population/3;
    printf("Toilets to be consumed is: %d\n",toilets);

    totalCost=toilets*installation_cost;
    printf("Total cost of setup: $ %lf \n",totalCost);

    water_saved=usage*toilets*(old_toilet_usage-new_toilet_usage);
    printf("Water saved in total is: %lf litres.",water_saved);
    return 0;
}