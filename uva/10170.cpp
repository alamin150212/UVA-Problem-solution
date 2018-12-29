#include<stdio.h>

int main()
{
    long long s,d,ans,i;
    while(scanf("%lld%lld",&s,&d)==2)
    {
        ans=0;
        for(i=s ; ; i++)
        {
            ans+=i;
            if(ans==d || ans>d)
            {
                printf("%lld\n",i);
                break;
            }

        }
    }
}
