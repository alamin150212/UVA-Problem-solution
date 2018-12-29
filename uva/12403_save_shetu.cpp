#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int n,i,t,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",s);
        if(strcmp(s,"donate")==0)
        {
            scanf("%d",&n);
            sum+=n;

        }
        if(strcmp(s,"report")==0)
        {
            printf("%d\n",sum);
        }
    }
}
