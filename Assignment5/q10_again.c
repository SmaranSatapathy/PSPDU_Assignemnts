#include <stdio.h>
#include <math.h>


void scan_data(double *right,char *op)
{
    printf("Enter operator: ");
    scanf(" %c",op);
    printf("Enter number: ");
    scanf("%lf",right);
}

void do_next_op(double *left,double *right,char *op)
{
    if(*op=='+')
    *left=*left+*right;

    else if(*op=='-')
    *left=*left-*right;

    else if(*op=='*')
    *left=*left**right;

    else if(*op=='/')
    *left=*left/ *right;

    else if(*op='^')
    *left=pow(*left,*right);
}

int main()
{
    double left=0,right;
    char op;

    while(1)
    {
        scan_data(&right,&op);
        if(op=='q'||op=='Q')
        {
            printf("Final result is: %0.2lf",left);
            break;
        }

        else{
            do_next_op(&left,&right,&op);
            printf("result so far is: %0.2lf\n",left);
        }
    }
}