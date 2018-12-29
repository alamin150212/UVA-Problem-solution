#include<stdio.h>
#include<math.h>

int main()
{
    double n,p,ans,a;
    while(scanf("%lf%lf",&n,&p)==2)
    {
        a = 1/n;
        ans = pow(p,a);
        printf("%.0lf\n",ans);
    }
}
