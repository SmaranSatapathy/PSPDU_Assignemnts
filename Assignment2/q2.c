#include <stdio.h>

double calculateTime(char bread_type,char double_check,char manual_check);

void displayInfo(char bread_type,char double_check,char manual_check)
{
    printf("Bread type is: %c\n",bread_type);
    printf("is bread loaf double? : %c\n",double_check);
    printf("is baking manual? : %c\n",manual_check);

    double time=calculateTime(bread_type,double_check,manual_check);
    printf("\nTotal time taken for baking: %0.3lf mins.",time);
}

double calculateTime(char bread_type,char double_check,char manual_check)
{
    double time=0;

    if(double_check=='y')
    {
         if(bread_type=='w')
    {
        printf("Primary kneading.");
        time+=(15*0.5);
        printf("Primary rising.");
        time+=(60*0.5);
        printf("Secondary kneading.");
        time+=(18*0.5);
        printf("Secondary rising.");
        time+=(20*0.5);
        printf("Loaf Shaping.");
        time+=((2/60)*0.5);
        if(manual_check=='n')
        {
            printf("Final Rising.");
            time+=(75*0.5);
            printf("Baking.");
            time+=(45*0.5);
            printf("Cooling.");
            time+=(30*0.5);
        }
    }

    else if(bread_type=='s')
    {
        printf("Primary kneading.");
        time+=(20*0.5);
        printf("Primary rising.");
        time+=(60*0.5);
        printf("Secondary kneading.");
        time+=(33*0.5);
        printf("Secondary rising.");
        time+=(30*0.5);
        printf("Loaf Shaping.");
        time+=((2/60)*0.5);
        
        if(manual_check=='n')
        {
            printf("Final Rising.");
            time+=(75*0.5);
            printf("Baking.");
            time+=(35*0.5);
            printf("Cooling.");
            time+=(30*0.5);
        }
    }
    }

    else{
        if(bread_type=='w')
    {
        printf("Primary kneading.");
        time+=15;
        printf("Primary rising.");
        time+=60;
        printf("Secondary kneading.");
        time+=18;
        printf("Secondary rising.");
        time+=20;
        printf("Loaf Shaping.");
        time+=(2/60);
        if(manual_check=='n')
        {
            printf("Final Rising.");
            time+=75;
            printf("Baking.");
            time+=45;
            printf("Cooling.");
            time+=30;
        }
    }

    else if(bread_type=='s')
    {
        printf("Primary kneading.");
        time+=20;
        printf("Primary rising.");
        time+=60;
        printf("Secondary kneading.");
        time+=33;
        printf("Secondary rising.");
        time+=30;
        printf("Loaf Shaping.");
        time+=(2/60);
        
        if(manual_check=='n')
        {
            printf("Final Rising.");
            time+=75;
            printf("Baking.");
            time+=35;
            printf("Cooling.");
            time+=30;
        }
    }
    }
            return time;
}

int main()
{
    char bread_type,double_check,manual_check;
    printf("Enter bread type: ");
    scanf(" %c",&bread_type);
    printf("Enter for double (y/n):");
    scanf(" %c",&double_check);
    printf("Enter whether baking is manual (y/n): ");
    scanf(" %c",&manual_check);
    displayInfo(bread_type,double_check,manual_check);
}