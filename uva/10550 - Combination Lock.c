#include<stdio.h>

int main()
{
    int p,q,r,s,a,b,c,ans;
    while(scanf("%d %d %d %d",&p,&q,&r,&s)==4)
    {
        if(p==0 && q==0 && r==0 && s==0)
        {
            break;
        }
        ans = 1080;

        if(q>p)
        {
            a=(40-q+p)*9;
        }
        else
        {
            a=(p-q)*9;
        }
        if(q>r)
        {
            b=(40-q+r)*9;
        }
        else
        {
            b=(r-q)*9;
        }

        if(s>r)
        {
            c=(40-s+r)*9;
        }
        else
        {
            c=(r-s)*9;
        }

        ans=ans+a+b+c;
        printf("%d\n",ans);
    }
}
