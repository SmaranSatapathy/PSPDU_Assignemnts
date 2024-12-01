#include <stdio.h>
#include <math.h>

#define e 2.71
#define pi 3.141

int main()
{
    int n;
    double ans;

    printf("Enter n: ");
    scanf("%d",&n);

    ans=pow(n,n)*pow(e,-n)*sqrt(((2*n)+(1/3))*pi);
    printf("Factorial of %d is: %lf.",n,ans);
}