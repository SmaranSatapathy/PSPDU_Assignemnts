#include <stdio.h>
#include <math.h>

int main()
{
    int range=20;
    int x[range];
    int y[range];
    int z[range];

    int n=0,sentinel_value=-1,value,sums=0;
    double sqrt_ans;

    while(n<range)
    {
        printf("Enter value: ");
        scanf("%d",&value);

        if(value==sentinel_value)
        break;

        x[n++]=value;
    }

    for(int i=0;i<n;i++)
    {
        printf("Enter number: ");
        scanf("%d",&y[i]);
    }

    for(int i=0;i<n;i++)
    {
        z[i]=x[i]*y[i];
        sums+=z[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\n",x[i],y[i],z[i]);
    }

    sqrt_ans=sqrt(sums);
    printf("Square root value i: %lf",sqrt_ans);
}