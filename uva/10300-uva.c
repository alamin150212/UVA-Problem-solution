#include<stdio.h>
int main()
{
    int i,j,n,f,a,b,c,ans;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        ans=0;
        scanf("%d",&f);
        for(j=1; j<=f; j++)
        {
            scanf("%d%d%d",&a,&b,&c);
            ans+=a*c;
        }
        printf("%d\n",ans);
    }
}
