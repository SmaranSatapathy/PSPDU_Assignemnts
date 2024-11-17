#include<stdio.h>
#define k 2.5
int main()
{
    double q;
    int A,T1,T2,L;

    printf("Enter A: ");
    scanf("%d",&A);
    printf("Enter T1: ");
    scanf("%d",&T1);
    printf("Enter T2: ");
    scanf("%d",&T2);
    printf("Enter L: ");
    scanf("%d",&L);

    q=k*A*((T1-T2))/L;
    printf("Answer is: %lf",q);
}