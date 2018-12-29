#include<stdio.h>

int gcd(int a,int b)
{
    if(b!=0)return gcd(b,a%b);
    else return a;
}
int main()
{
    int n,i,j,g;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;
        g=0;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                g+=gcd(i,j);
            }
        }
        printf("%d\n",g);
    }
}
