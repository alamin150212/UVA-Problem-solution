#include<stdio.h>

int main()
{
    int i,t;
    double l,l1,l2,w,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        l=5.0*r;
        w=3.0*r;
        l1=0.45*l;
        l2=0.55*l;
        w/=2.0;

        printf("Case %d:\n%.0lf %.0lf\n%.0lf %.0lf\n%.0lf %.0lf\n%.0lf %.0lf\n",i,-l1,w,l2,w,l2,-w,-l1,-w);
    }
}
