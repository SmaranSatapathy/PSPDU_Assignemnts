// Write a program to model a simple calculator. Each data line should consist of 
// the next operation to be performed from the list below and the right operand. 
// Assume the left operand is the accumulator value (initial value of 0). You need 
// a function scan_data with two output parameters that returns the operator 
// and right operand scanned from a data line. You need a function do_next_op 
// that performs the required operation. do_next_op has two input parameters 
// (the operator and operand) and one input/output parameter (the accumulator). 
// The valid operators are: 

#include <stdio.h>
#include <math.h>

void scan_data(char *operator,double *right)
{
    printf("Enter operator: ");
    scanf("%c",operator);

    printf("Enter right operand: ");
    scanf("%lf",right);
}

void do_next_op(char *op,double *left,double *right)
{
    switch(*op)
    {
        case '+':
            *left+=*right;
            break;
        case '-':
            *left-=*right;
            break;
        case '*':
            *left*=*right;
            break;
        case '/':
            *left/=*right;
            break;
        case '^':
            *left=pow(*left,*right);
            break;
        default:
            printf("Invalid operator\n");
    }
}

int main()
{
    double left_operand=0,right_operand;
    char opeartor;

    scan_data(&opeartor,&right_operand);
    do_next_op(&opeartor,&left_operand,&right_operand);
    printf("Result: %0.2lf\n",left_operand);
}