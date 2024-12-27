#include <stdio.h>

int main()
{
    int N,n,s;
    double l,efficency_P,weekly_subsidy;

    printf("Enter size: ");
    scanf("%d",&N);

    printf("Passengers \t \t Weekly Commute(km) \t \tGasoline Consumption(L) \t \t Efficiency (Pass km/l)  Weekly Subsidy($)\n");


    for(int i=0;i<N;i++)
    {
        printf("Enter passenger:");
        scanf("%d",&n);
        printf("Enter gasoline consumed:");
        scanf("%lf",&l);
        printf("Enter distance travelled:");
        scanf("%d",&s);

        efficency_P=(n*s)/l;
        weekly_subsidy=0.08*n*s;

        printf("%d \t \t %d \t \t %lf \t \t %lf \t \t %lf\n",n,s,l,efficency_P,weekly_subsidy);

    }


}