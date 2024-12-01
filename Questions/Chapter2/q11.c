#include <stdio.h>

int main()
{
    int m,n,side1,side2,hypotenuse;
    printf("ENter value: ");
    scanf("%d",&m);
    printf("ENter value less than x: ");
    scanf("%d",&n);

    side1=(m*m)-(n*n);
    side2=2*m*n;
    hypotenuse=(m*m)+(n*n);

    printf("Side 1 is: %d, Side 2 is: %d and Hypotenuse is: %d",side1,side2,hypotenuse);
}