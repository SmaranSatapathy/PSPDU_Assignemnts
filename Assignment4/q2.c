#include <stdio.h>
#include <stdbool.h>

void check_multiples(int x,int *ptr);
void checkSum(int x,int *ptr);
void check_prime(int x,int *ptr);
int main()
{
    int n,x,check1,check2,check3;
    printf("Enter n:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("Enter number: ");
        scanf("%d",&x);

        check_multiples(x,&check1);
        checkSum(x,&check2);
        check_prime(x,&check3);

        printf("Is divisble? %s",(check1?"Yes":"No"));
        printf("Even(1) or Odd(0) ? %s",(check2?"Even":"Odd"));
        printf("Is prime? %s",(check3?"Yes":"No"));
    }
}

void check_multiples(int x,int *ptr)
{
    *ptr=x%7==0||x%13==0||x%11==0;
}

void checkSum(int x,int *ptr)
{
    int sum=0;
    while(x!=0)
    {
        int rem=x%10;
        sum+=rem;
        x/=10;
    }
    *ptr=sum%2==0;
} 

void check_prime(int x,int *ptr)
{
    int count=0;
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        count++;
    }

    *ptr=count==2;
}