#include<stdio.h>
#include<math.h>

int main()
{
    int i,t;
    double x,y,r,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf",&x,&y,&r);
        a = r-sqrt(x*x+y*y);
        b = r+sqrt(x*x+y*y);
        printf("%.2lf %.2lf\n",a,b);
    }
}
