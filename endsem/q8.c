#include <stdio.h>

void isMultiple(int *x,int *ans1)
{
    *ans1=(*x%7==0||*x%11==0||*x%13==0)?1:0;
}

char* isEven_or_Odd(int x)
{
    int sum=0;

    while(x!=0)
    {
        int rem=x%10;
        sum+=rem;
        x/=10;
    }

    if(sum%2==0)
    return "Even";

    else
    return "Odd";
}

void isPrime(int *x,int *ans3)
{
    int count=0;
    for(int i=1;i<=*x;i++)
    {
        if(*x%i==0)
        count++;
    }

    *ans3=(count==2)?1:0;
}

int main()
{
    int n,x,ans1,ans3;
    

    printf("enter size: ");
    scanf("%d",&n);

    for(int i=0;i<1;i++)
    {
        printf("enter number: ");
        scanf("%d",&x);

        isMultiple(&x,&ans1);
        printf("Is multiple? %d\n",ans1);

        char *ans2=isEven_or_Odd(x);
        printf("Is sum of digits odd or even? %s\n",ans2);

        isPrime(&x,&ans3);
        printf("Is prime? %d\n",ans3);
    }
}