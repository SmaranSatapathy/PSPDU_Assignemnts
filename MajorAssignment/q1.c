#include <stdio.h>
#include <math.h>

void scan_data(double *right,char *ch)
{
    printf("Enter operator: ");
    scanf(" %c",ch);

    if(*ch!='q' || *ch!='Q')
    {
        printf("Enter number: ");
        scanf("%lf",right);
    }  
}

void do_next_op(char *ch,double *left,double *right)
{
    if(*ch=='+')
    *left=*left+*right;

    else if(*ch=='-')
    *left=*left-*right;

    else if(*ch=='*')
    *left=*left**right;


    else if(*ch=='/')
    *left=*left/ *right;

    else if(*ch=='^')
    *left=pow(*left,*right);
}

int main()
{
    double left=0,right=0;
    char op;
    
    while(1)
    {
        scan_data(&right,&op);
        if(op=='q' || op=='Q')
        {
            printf("Final result is: %.2lf",left);
            break;
        }

        else 
        {
            printf("Char is: %c",op);
            printf("\nLeft number is: %.2lf",left);
            printf("\nRight number is: %.2lf",right);
            do_next_op(&op,&left,&right);
            printf("\nResult so far is: %.2lf\n",left);
        }
    }
}