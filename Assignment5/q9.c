// When an aircraft or an automobile is moving through the atmosphere, it must 
// overcome a force called drag that works against the motion of the vehicle. The 
// drag force can be expressed as 
// F = 1 CD x A x density x V2
//  where F is the force (in newtons), CD is the drag coefficient, A is the projected area of the vehicle perpendicular to the velocity vector (in m2), is the 
// density of the gas or fluid through which the body is traveling (kg/m 3 ), and V 
// is the body’s velocity. The drag coefficient CD has a complex derivation and is 
// frequently an empirical quantity. Sometimes the drag coefficient has its own 
// dependencies on velocities: For an automobile, the range is from approximately 0.2 (for a very streamlined vehicle) through about 0.5. For simplicity, 
// assume a streamlined passenger vehicle is moving through air at sea level 
// (where  = 1.23 kg/m 3 ). Write a program that allows a user to input A and CD 
// interactively and calls a function to compute and return the drag force. Your 
// program should call the drag force function repeatedly and display a table 
// showing the drag force for the input shape for a range of velocities from 0 m/s 
// to 40 m/s in increments of 5 m/s. 

#include <stdio.h>

void velocity_display(double *CD,double *A,double *density,int *i,double *F)
{
    *F=1*(*CD)*(*A)*(*density)*(*i)*(*i);
    printf("Drag force for velocity %d m/s is: %0.3lf N\n",*i,*F);
}

int main()
{
    int i;
    double CD,A,density=1.23,V,F;
    printf("Enter the drag coefficient: ");
    scanf("%lf",&CD);
    printf("Enter the area: ");
    scanf("%lf",&A);

    for(i=0;i<=40;i+=5)
    {
        velocity_display(&CD,&A,&density,&i,&F);
    }
}