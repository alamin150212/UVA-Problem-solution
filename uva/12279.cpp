#include<stdio.h>

int main()
{
    int ara[1000],a,b,n,i,c=0;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        a=b=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]>0)a++;
            else b++;
        }
        c++;
        printf("Case %d: %d\n",c,a-b);
    }
}
