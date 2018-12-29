#include<stdio.h>

long long gcd(long long a,long long b)
{
    long long i,rem;
    for(i=1;; i++)
    {
        rem=a%b;
        if(rem==0)
        {
            return b;
        }
        a=b;
        b=rem;
    }

}
long long lcm(long long a,long long b)
{
    return ((a*b)/gcd(a,b));
}

int main()
{
    long long t,a,b,ans,i,c,j;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld",&a,&b);

        if(b%a!=0)
        {
            printf("NO SOLUTION\n");
            continue;
        }
        c=b/a;
        for(j=c; j<=b; j+=c)
        {
            if(lcm(j,a)==b)break;
        }
        printf("%lld\n",j);
    }
}
