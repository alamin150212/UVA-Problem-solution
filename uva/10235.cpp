#include<stdio.h>
#include<math.h>

long long int prime(long long int);
int main()
{
    long long int n,i,rv,a,m,flag,f;
    while(scanf("%lld",&n)==1)
    {
        a=n;
        if(n==1 || n==0)
        {
            printf("%lld is not prime.\n",a);
            continue;
        }
        if(n==2)
        {
            printf("%lld is prime.\n",a);
            continue;
        }
        flag=f=1;
        if(prime(n)==1)
        {
            flag=f=0;
        }
        rv=0;
        while(n>0)
        {
            rv=rv*10+n%10;
            n/=10;
        }
        if(prime(rv)==1)
        {
            if(rv!=a)f=2;
        }
        if(flag==0 && f==2)printf("%lld is emirp.\n",a);
        else if(f==0)printf("%lld is prime.\n",a);
        else printf("%lld is not prime.\n",a);
    }
}

long long int prime(long long int n)
{
    long long int i;
    if(n%2==0)return 0;

    for(i=3; i<=sqrt(n); i+=2)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
