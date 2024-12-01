#include <stdio.h>

int main()
{
    double start,finish,cost=0;
    printf("MILAGE REIMBURSEMENT CALCULATOR:\n");
    printf("Enter start: ");
    scanf("%lf",&start);
    printf("Enter finish: ");
    scanf("%lf",&finish);

    cost=(finish-start)*0.35;
    printf("Cost is: $%lf",cost);
}