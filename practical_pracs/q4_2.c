#include <stdio.h>
#include <string.h>

void mutiples_check(int n,int *ans1)
{
    *ans1=(n%7==0 || n%11==0 || n%13==0)?1:0;
}

void check_even_odd(int n,char *ans2)
{
    int sum=0;
    while(n!=0)
    {
        int rem=n%10;
        sum+=rem;
        n/=10;
    }

    strcpy(ans2,(sum%2==0)?"EVEN":"ODD");
}

void check_prime(int n,int *ans3)
{
    int count=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }

    *ans3=(count==2)?1:0;
}

int main()
{
    int n,ans1=0,ans3=0,x;
    char ans2[3];

    printf("Enter n: ");
    scanf("%d",&n);
    // printf("Range is: %d",range);

    for(int i=1;i<=n;i++)
    {
        printf("Enter value: ");
        scanf("%d",&x);

        mutiples_check(x,&ans1);
        printf("Is it a multiple of 7/11/13? %d\n",ans1);

        check_even_odd(x,ans2);
        printf("Is the sum of didgits odd or even? %s\n",ans2);

        check_prime(x,&ans3);
        printf("Is it a prime number: %d\n",ans3);
    }
    return 0;
}