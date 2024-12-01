#include <stdio.h>
#define low_flush_toilets 2
#define high_flush_toilets 15
#define usage 14
#define cost_per_setup 150
int main()
{
    int total_people,toilet_usage,total,ans;
    printf("Enter people: ");
    scanf("%d",&total_people);
    toilet_usage=total_people/3;

    total=cost_per_setup*toilet_usage;
    printf("Cost of setup: $%d\n",total);

    ans=toilet_usage*(high_flush_toilets-low_flush_toilets)*usage;
    printf("Water saved is: %d Litres.",ans);
}