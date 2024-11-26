#include <stdio.h>
#include <math.h>
#define g 9.80
#define efficiency 0.9

int main()
{
   int ht;
   double vol,mass,work,power;
   printf("Enter the height in metres:");
   scanf("%d",&ht);
   printf("Height is: %dm\n",ht);

   printf("Enter volume of water released: ");
   scanf("%lf",&vol);
   printf("Volume of water released is: %lfcubic metres.\n",vol);

    mass=1000*vol;
    printf("Mass recored is: %lfkgs\n",mass);

    work=mass*g*ht;
    printf("Work done is: %lf J\n",work);
    power=efficiency*(work/1);
    printf("Power done in Watts is: %lfW\n",power);
    power=power/pow(10,6);
    printf("Power done in Megawatts is: %lfMW",power);

    return 0;
}