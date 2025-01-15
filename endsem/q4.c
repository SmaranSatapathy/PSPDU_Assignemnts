#include <stdio.h>
#include <math.h>

#define MAX_NUMBER 20

int main()
{
    int n=0,i=1,num;
    int x[MAX_NUMBER];
    int y[MAX_NUMBER];
    int z[MAX_NUMBER];

    while(i<MAX_NUMBER)
    {
        printf("Enter number: ");
        scanf("%d",&num);

        if(num==-1)
        break;

        x[i++]=num;
        n++;
    }

    for(int i=0;i<n;i++)
    {
        printf("Enter values: ");
        scanf("%d",&y[i]);
    }

    int sum=0;
    for(int i=0;i<n;i++)
    {
        z[i]=x[i]*y[i];
        sum+=z[i];
    }

    printf("x\t\t y \t\t z");
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t %d\t\t %d\n",x[i],y[i],z[i]);
    }

    double ans=sqrt(sum);
    printf("Answer is: %d",ans);
}