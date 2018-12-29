#include<stdio.h>

int main()
{
    double h,m,deg;
    while(scanf("%lf:%lf",&h,&m)==2)
    {
        if(h==0 && m==0)break;

        deg = (h*30)-(m*5.5);
        if(deg>=0 && deg<=180)printf("%.3lf\n",deg);
        else if(deg>180)printf("%.3lf\n",360-deg);
        else if(deg<0 && deg>=-180)printf("%.3lf\n",-deg);
        else printf("%.3lf\n",360+deg);
    }
}
