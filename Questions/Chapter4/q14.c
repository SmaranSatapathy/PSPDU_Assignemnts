// The rate of decay of a radioactive isotope is given in terms of its half-life H, 
// the time lapse required for the isotope to decay to one-half of its original mass. 
// The isotope cobalt-60 ( 60 Co) has a half-life of 5.272 years. Compute and print 
// in table form the amount of this isotope that remains after each year for 5 
// years, given the initial presence of an amount in grams. The value of amount 
// should be provided interactively

#include <stdio.h>
#include <math.h>

int main()
{
    int i=1;
    double h=5.272,initial_amt,r;
    printf("Enter the initial amount of cobalt-60 in grams: ");
    scanf("%lf",&initial_amt);

    for(i=1;i<=5;i++)
    {
        r=initial_amt*pow(2.71,-0.693*(i/h));
        printf("Amount of cobalt-60 remaining after %d years: %lf grams\n",i,r);
    }
    return 0;
}