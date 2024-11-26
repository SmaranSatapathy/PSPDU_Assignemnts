#include <stdio.h>

double fast_food_billions(int year);

int main(){
   int yr;
   double ans;

   while(1)
   {
        printf("Enter year: ");
        scanf("%d",&yr);

        if(yr<2005)
        {
            printf("Program stopped.");
            break;
        }
        else{
            ans=fast_food_billions(yr);
            printf("Answer is: %lf\n",ans);
        }
   }
}

double fast_food_billions(int year)
{
    return 33.2 + 16.8*(year-2005);
}