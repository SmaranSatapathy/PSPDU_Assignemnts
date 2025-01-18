// Determine the following information about each value in a list of positive integers. 
//  a. Is the value a multiple of 7, 11, or 13? 
//  b. Is the sum of the digits odd or even? 
//  c. Is the value a prime number? 
//  You should write a function with three type int output parameters that send 
// back the answers to these three questions. Some sample input data might be: 
// 104 3773 13 121 77 30751

#include <stdio.h>

void checkMultiple(int *x,int *check)
{
    *check=(*x%7==0 || *x%11==0 || *x%13==0)?1:0;
}

void sum_of_digits(int x,int *sum)
{
    while(x!=0)
    {
        int rem=x%10;
        sum+=rem;
        x=x/10;
    }
}

void check_prime(int *x,int *count)
{
    int i;

    for(i=1;i<=*x;i++)
    {
        if(*x%i==0)
        *count++;
    }
}

int main()
{
    int n,x,i,multiple_ans,sum=0,count=0;

    printf("Enter size of numbers: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("Enter number: ");
        scanf("%d",&x);

        checkMultiple(&x,&multiple_ans);
        printf("Is %d a multiple of 7,11 or 13 ? %d\n",x,multiple_ans);

        sum_of_digits(x,&sum);
        printf("Is sum odd? %d\n",sum%2==0?1:0);

        check_prime(&x,&count);
        printf("Is %d prime? %d\n",x,count==2?1:0);
    }

}