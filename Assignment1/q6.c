#include <stdio.h>

int main()
{
    int depth;
    double cel,fahr;

    printf("Enter depth (in km): ");
    scanf("%d",&depth);

    cel=10*depth+20;
    printf("Temperature in Celsius is: %lf\n",cel);

    fahr=1.8*cel+32;
    printf("Temperature in Fahrenheit is: %lf\n",fahr);

    return 0;
}