#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* deblank(char input[])
{
    int i,j=0;
    char *ans=(char*)malloc((strlen(input) + 1) * sizeof(char));;

   for(i=0;i<strlen(input);i++)
   {
        if(input[i]!=' ')
        {
            ans[j]=input[i];
            j++;
        }
   }
    ans[j]='\0';
    return ans;
}
int main()
{
    char *ans=deblank("Shrie Lone");
    printf("Answer is: %s",ans);
    return 0;
}