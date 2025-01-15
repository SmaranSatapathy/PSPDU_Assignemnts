#include <stdio.h>

int f(int x)
{
    if(x<=0)
    return 0;

    else
    return f(x-1)+2;
}

int main()
{
    int ans=f(5);
    printf("Ans is: %d",ans);
}