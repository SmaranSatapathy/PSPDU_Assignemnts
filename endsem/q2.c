#include <stdio.h>

struct element_t{
    int atomic_number;
    char name[10];
    char chemical_symbol[3];
    char class[20];
    double atomic_wt;
    int electrons[7];
};

struct element_t scan_element()
{
    struct element_t e;
    printf("Enter atomic number: ");
    scanf("%d",&e.atomic_number);
    printf("Enter name of the element: ");
    scanf("%s",&e.name);
    printf("enter chemical symbol: ");
    scanf("%s",&e.chemical_symbol);
    printf("Enter class: ");
    scanf("%s",&e.class);
    printf("Enter atomic weight: ");
    scanf("%lf",&e.atomic_wt);
    printf("Enter electrons: \n");
    for(int i=0;i<7;i++)
    {
        printf("Enter for %d shell: \n",i+1);
        scanf("%d",&e.electrons[i]);
    }

    return e;
}

void print_element(struct element_t e)
{
    printf("%d %s %s %s %lf ",e.atomic_number,e.name,e.chemical_symbol,e.class,e.atomic_wt);
    for(int i=0;i<7;i++)
    {
        printf("%d ",e.electrons[i]);
    }
}

int main()
{
    struct element_t e=scan_element();
    print_element(e);
}