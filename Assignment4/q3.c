#include <stdio.h>
#include <math.h>

int main()
{
    double NG=0,LG=1.0;
    int N;
    printf("Enter number:");
    scanf("%d",&N);

  while(1)
  {
    NG=0.5*(LG+N/LG);
    if(fabs(NG-LG)>0.005)
    LG=NG;
    else
    break;
  }
    printf("Answer is: %lf",NG);
}