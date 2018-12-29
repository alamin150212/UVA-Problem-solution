#include <stdio.h>
#include <math.h>

int prime(int n)
{
    int i;
    if(n==1)return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)return 0;
    }
    return 1;
}
int main()
{
    int n,i,p,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d,",&p);

        if(prime(p)==1)
        {
            x = pow(2,p)-1;
            if(prime(x)==1)printf("Yes\n");
            else printf("No\n");
        }
        else printf("No\n");
    }
}
