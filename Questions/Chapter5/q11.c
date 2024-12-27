// After studying gross annual revenues of Broadway shows over a 20-year 
// period, you model the revenue as a function of time: 
//  R(t) = 203.265 (1.071)t
 
//  where R is in millions of dollars and t is the years since 1984. Create the following C functions to implement this model: 
// revenue —calculates and returns R for an input parameter of t . 
// predict —predicts the year in which revenues (in millions) will first equal or 
// exceed the value of the input parameter. For example, predict(200) would 
// return 1984. 
//  Write a main function that calls predict to determine when revenues will 
// likely exceed $1 trillion (i.e., 1,000 million). Then create an output file that 
// contains a table of estimated revenues (in millions of dollars) for all the years 
// 372 Chapter 6 • Pointers and Modular Programming
// from 1984 through the year when revenues should exceed $1 trillion. Round 
// revenue estimates to three decimal places.

#include <stdio.h>
#include <math.h>

int predict(double amt)
{
    int time;
    time=log(amt/203.265)/log(1.071);
    return time+1;
}

void revenue(int *t,double *revenue_amt)
{
    *revenue_amt=203.265*pow(1.071,*t);
}

int main()
{
    int t,i;
    double revenue_amt=0;
    t=predict(1000);
    printf("Time of exceed: %d yrs\n",t);

    printf("Year \t \t Revenue\n");

    for(i=1;i<=t;i++)
    {
        revenue(&i,&revenue_amt);
        printf("%d \t \t %.3lf\n",i,revenue_amt);
    }
}