#include<stdio.h>
#define PI acos(-1.0)

int main()
{
    int i,t,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        double ar,ag,w,r;
        scanf("%d",&l);
        r = .2*l;
        w = .6*l;
        ar = PI*r*r;
        ag = (l*w)-ar;
        printf("%.2f %.2f\n",ar,ag);
    }
}
