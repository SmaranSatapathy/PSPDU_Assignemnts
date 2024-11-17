#include <stdio.h>
double celsius_at_depth(int depth)
{
    return (10*depth)+20;
}

double fahreinheit(int depth)
{
    double cel=celsius_at_depth(depth);
    return (1.8*cel)+32;
}
int main()
{
    int depth;
    printf("Enter depth in km: ");
    scanf("%d",&depth);
    double cel_ans,fah_ans;

    cel_ans=celsius_at_depth(depth);
    fah_ans=fahreinheit(depth);
    printf("Celsius is: %.2lf C and Fahrenheit is: %.2lf F",cel_ans,fah_ans);
}