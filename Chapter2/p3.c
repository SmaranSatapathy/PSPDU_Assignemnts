#include <stdio.h>

int main()
{
    char a='A',b;
    int x;
    double y;

    printf("Enter value of b: ");
    scanf("%c",&b);
    printf("Enter x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%lf",&y);

    printf("Answers are: %c %c %d %lf",a,b,x,y);
}