#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,i,s,r,area;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2.0;
        if(s==0)printf("The radius of the round table is: 0.000\n");
        else
        {
            area=sqrt(s*(s-a)*(s-b)*(s-c));
            r=area/s;
            printf("The radius of the round table is: %.3lf\n",r);
        }
    }
}
