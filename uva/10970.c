#include<stdio.h>

int main()
{
    int n,m,ans;
    while(scanf("%d%d",&m,&n)==2)
    {
        ans = (n*m)-1;
        printf("%d\n",ans);
    }
}
