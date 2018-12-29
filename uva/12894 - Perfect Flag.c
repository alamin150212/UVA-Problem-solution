#include<stdio.h>


int main()
{
    int i,t;
    double x1,x2,y1,y2,c1,c2,r,w,w1,r1,cx,cy,l;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&c1,&c2,&r);
        l=x2-x1;
        w=y2-y1;

        w1=0.6*l;
        r1=0.2*l;

        c1=c1-x1;
        c2=c2-x1;

        cx=0.45*l;
        cy=0.5*w;

        if(r==r1&&w==w1&&c1==cx&&c2==cy)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
