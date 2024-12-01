#include <stdio.h>

int main()
{
    int x[20];
    int y[20];
    int z[20];

    for(int i=0;i<20;i++)
    {
        if(i==19)
        {
            printf("Nothing to enter. It's the sentinal value.\n");
            x[19]=-1;
        }
        else{
            printf("Enter number: ");
            scanf("%d",&x[i]);
        }
    }

    for(int i=0;i<20;i++)
    {
        if(i==19)
        {
            printf("Nothing to enter. It's just the sentinal value.\n");
            y[19]=-1;
        }
        else{
            printf("Enter number: ");
            scanf("%d",&y[i]);
        }
    }

    for(int i=0;i<20;i++)
    {
        z[i]=x[i]*y[i];
    }

    for(int i=0;i<20;i++)
    {
        printf("%d x %d = %d\n",x[i],y[i],z[i]);
    }
    
}