#include<stdio.h>
#include<math.h>
#define pi acos(-1)

int main()
{
    double r,ans,n;
    while(scanf("%lf%lf",&r,&n)==2)
    {
        ans = (r*r*n*sin(pi*2/n))/2;
        printf("%.3lf\n",ans);
    }
}
