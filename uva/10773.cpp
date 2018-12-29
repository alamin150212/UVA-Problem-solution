#include<stdio.h>
#include<math.h>

int main()
{
    double d,v,u,w;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf",&d,&v,&u);
        w = sqrt(u*u-v*v);
        if( v>=u ||(d/w)==(d/u) )
        {
            printf("Case %d: can't determine\n",i);
        }
        else
        {
            printf("Case %d: %.3lf\n",i,(d/w)-(d/u));
        }
    }
}
