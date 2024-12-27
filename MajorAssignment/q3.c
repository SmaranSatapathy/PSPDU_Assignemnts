#include <stdio.h>

void merger(double arr1[],double arr2[],int m,int n,double sorted_array[],int *result)
{
    int i=0,j=0,k=0;

    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            if(k==0 || sorted_array[k-1]!=arr1[i])
            sorted_array[k++]=arr1[i];

            i++;
        }

        else if(arr2[j]<arr1[i])
        {
            if(k==0 || sorted_array[k-1]!=arr2[j])
            sorted_array[k++]=arr2[j];

            j++;
        }

        else
        {
            if(k==0 || sorted_array[k-1]!=arr1[i])
            sorted_array[k++]=arr1[i];

            i++;
            j++;
        }
    }

    while(i<m)
    {
        sorted_array[k++]=arr1[i];
        i++;
    }

    while(j<n)
    {
        sorted_array[k++]=arr2[j];
        j++;
    }

    *result=k;
}

int main()
{
    int m,n,total_size,i,j,k=0,sorted_array_size;


    printf("Enter size of array 1: ");
    scanf("%d",&m);

    printf("Enter size of array 2:");
    scanf("%d",&n);

    double arr1[m];
    double arr2[n];
    total_size=m+n;

    double sorted_array[total_size];

    for(i=0;i<m;i++)
    {
        printf("Enter number: ");
        scanf("%lf",&arr1[i]);
    }

    printf("Elements in array 1 are: ");
    for(i=0;i<m;i++)
    {
        printf("%.2lf\t",arr1[i]);
    }
    printf("\n");

    // for array 2
    for(i=0;i<n;i++)
    {
        printf("Enter number: ");
        scanf("%lf",&arr2[i]);
    }

    printf("Elements in array 2 are: ");
    for(i=0;i<n;i++)
    {
        printf("%.2lf\t",arr2[i]);
    }
    printf("\n");

    merger(arr1,arr2,m,n,sorted_array,&sorted_array_size);

    printf("Final sorted arrays is: ");
    for(i=0;i<sorted_array_size;i++)
    {
        printf("%.2lf\t",sorted_array[i]);
    }
}