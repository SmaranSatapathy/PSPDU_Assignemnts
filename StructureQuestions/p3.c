#include <stdio.h>

struct element_t{
    int atomic_num;
    char name[10];
    char symbol[2];
    char class[10];
    double atomic_wt;
    int electrons[7];
};

struct element_t scan_element()
{
    struct element_t e;
    printf("Enter atomic number: ");
    scanf("%d",&e.atomic_num);
    printf("Enter name of the element: ");
    scanf("%s",&e.name);
    printf("Enter symbol of the element: ");
    scanf("%s",&e.symbol);
    printf("Enter class of the element: ");
    scanf("%s",&e.class);
    printf("Enter atomic weight: ");
    scanf("%lf",&e.atomic_wt);

    printf("Enter electron configuration for: \n");

    for(int i=0;i<7;i++)
    {
        printf("%d shell:\n",i+1);
        scanf("%d",&e.electrons[i]);
    }
    return e;
}

void print_element(struct element_t e)
{
    printf("%d %s  %s  %s %lf ",e.atomic_num,e.name,e.symbol,e.class,e.atomic_wt);

    for(int i=0;i<=6;i++)
    {
        printf("%d ",e.electrons[i]);
    }
}

int main()
{
    struct element_t e=scan_element();
    print_element(e);
    return 0;
}