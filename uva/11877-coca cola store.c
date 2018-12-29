#include<stdio.h>

int main()
{
    int n,ans;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
        {
            break;
        }
        ans=n/2;
        printf("%d\n",ans);
    }
}
