#include<stdio.h>

int main()
{
    long long int bin,rem,ans,i;
    while(scanf("%lld",&bin)==1)
    {
        ans=0;
        if(bin<0)break;
        for(i=1;bin>0;i*=10)
        {
            ans+=(bin%3)*i;
            bin/=3;
        }
        printf("%lld\n",ans);
    }
}
