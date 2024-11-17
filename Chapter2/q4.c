#include <stdio.h>

int main()
{
    double cel,fah;
    printf("Enter temerature in Fahrenheit: ");
    scanf("%lf",&fah);

    cel=((fah-32)*5)/9;
    printf("Celsius is: %lf C.",cel);
}