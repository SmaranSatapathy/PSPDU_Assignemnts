#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* deblank(char input[])
{
    char *ans=(char*)malloc((strlen(input)+1)*sizeof(char));

    int j=0;
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]==' ')
        continue;

        else
        ans[j++]=input[i];
    }
    ans[j]='\0';

    return ans;
}

int main()
{
    char *ans=deblank("Shrie Lone wolf");
    printf("%s",ans);
}