#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,s,ans;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        s=sqrt(n);
        ans=s*s;
        if(ans==n)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}
