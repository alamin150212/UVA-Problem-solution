#include<stdio.h>

int main()
{
    int n,a[60],i;
    while(scanf("%d",&n)==1 && n!=0)
    {
        a[0]=0;
        a[1]=1;
        for(i=2;i<=n+1;i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        printf("%d\n",a[n+1]);
    }
}
