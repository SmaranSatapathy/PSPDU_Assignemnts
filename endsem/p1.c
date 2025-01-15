#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* deblank(char input[])
{
    char *a=(char*)malloc((strlen(input)+1*sizeof(char)));
    int j=0;
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]==' ')
        continue;
        else
        a[j++]=input[i];
    }
    a[j]='\0';
    return a;
}
int main()
{
    char *ans=deblank("Shrie Lone wolf"); 
    printf("Ans is: %s",ans);  
}