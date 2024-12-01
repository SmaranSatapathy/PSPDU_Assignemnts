#include <stdio.h>
#define pi 3.141

void display_instructions()
{
    printf(" A manufacturer wishes to determine\ the cost of producing an open- \ 
    top cylindrical\ container. The surface area\ of the container is the sum of the  \ area        of the 170\
circular base plus the area of the outside (the\ circumference of the base times \
the height of the container). Write a program \ to take the radius of the base, \
the height of the container, the cost per sq \ centimeter of the material \
( cost ), and the number of containers to be \ produced ( quantity ). Calculate \
the cost of each container and the total cost \ of  producing all the containers.\n");
}

int main()
{
    display_instructions();
    double radius,ht,cost,total_cost,num_of_cylinders;
    printf("Enter radius: ");
    scanf("%lf",&radius);
    printf("Enter height: ");
    scanf("%lf",&ht);
    printf("enter cost:");
    scanf("%lf",&cost);
    printf("enter number of cylinders:");
    scanf("%lf",&num_of_cylinders);

    total_cost=cost*2*radius*ht*pi;
    printf("Cost of one cylinder: %0.2lf\n",total_cost);
    total_cost*=num_of_cylinders;
    printf("Total cost of all cylinders: %0.2lf",total_cost);
}