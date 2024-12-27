#include <stdio.h>

int main()
{
    int a,b,x,y,rem=-1;

    printf("Enter a (a>b):");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    x=a,y=b;

    while(rem!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }

    printf("GCD of %d and %d is: %d.",x,y,a);
}