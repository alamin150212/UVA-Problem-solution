#include<stdio.h>

int main()
{
    int n,c,count,i,j,ara[5];
    while(scanf("%d",&n)==1 && n!=0)
    {
        count=0;
        for(i=1; i<=n; i++)
        {
            for(j=0; j<5; j++)
            {
                scanf("%d",&ara[j]);
            }
            for(j=0; j<5; j++)
            {
                if(ara[j]<=127 && ara[j]>=0)
                {
                    c=j;
                    count++;
                }
                else if(ara[j]>255)
                {
                    count=0;
                }
            }
            if(count==1 )printf("%c\n",c+'A');
            else printf("*\n");
            count=0;
        }

    }
}
