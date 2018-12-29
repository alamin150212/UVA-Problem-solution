#include<stdio.h>
int main()
{
    int i,t;
    double c,inf,ans,f;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf",&c,&inf);

        f = ((9.0/5.0)*c)+32.0+inf;
        ans = ((f-32.0)*(5.0/9.0));

        printf("Case %d: %.2lf\n",i,ans);
    }
}
