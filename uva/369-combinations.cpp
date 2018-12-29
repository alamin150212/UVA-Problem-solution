#include<stdio.h>

long long int comb(int n,int m);
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)==2)
    {
        if(n==0 && m==0)break;

        else
        {
            printf("%d things taken %d at a time is %lld exactly.\n",n,m,comb(n,m));
        }
    }
}
long long int comb(int n,int m)
{
    int i;
    long long int res=1;
    if(n-m<m)
    {
        m=n-m;
    }
    for(i=1; i<=m; i++)
    {
        res*=n;
        res/=i;
        n--;
    }
    return res;
}
