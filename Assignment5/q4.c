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
    int x,ans;
    printf("Enter value of x: ");
    scanf("%d",&x);

    ans=f(x);
    printf("Answer is: %d",ans);
}