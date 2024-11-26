#include <stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x=45;
    int *ptr=&x;
    printf("%d\n",*ptr);
    *ptr=69;
    printf("%u\n",*ptr);
    printf("%d\n",x);
    *ptr=*ptr+5;
    printf("%d\n",*ptr);

    // int a=4,b=5;
    // printf("Numvers are: %d,%d.\n",a,b);
    // swap(&a,&b);
    // printf("Swapped: %d,%d.\n",a,b);
}