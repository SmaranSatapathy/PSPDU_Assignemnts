#include <stdio.h>

char* checker(int x);

int main()
{
// int x=printf("5 is odd");
// printf("%d",x);
// int i=1;
// if(i=!(printf("5 is odd"))+i)
// printf("5 is odd");
// else
// printf("5 is even");
// double f;
// f = (double)33 / 12;
// printf("%5.3f", f);
// f = 33.0 / 12;
// printf("\n%8.3f", f);
// int x=printf("\n");
// printf("%d",x);

int x=45;
char *ans=checker(x);
printf("Ans is: %s",ans);
}

char* checker(int x)
{
    int sum=0;
    while(x!=0)
    {
        int rem=x%10;
        sum+=rem;
        x/=10;
    }

    return ((sum%2==0)?"EVEN":"ODD");
}