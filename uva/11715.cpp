#include<stdio.h>
#include<math.h>

int main()
{
    double u,v,t,s,a;
    int i=1,j,n;
    while(scanf("%d",&n)==1)
    {
        if(n==0)break;

        if(n==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            s=((u+v)*t)/2;
            a=(v-u)/t;
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
            i++;
        }
        if(n==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            t=(v-u)/a;
            s=((u+v)*t)/2;
            printf("Case %d: %.3lf %.3lf\n",i,s,t);
            i++;
        }
        if(n==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,v,t);
            i++;
        }
        if(n==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
            i++;
        }

    }
}

