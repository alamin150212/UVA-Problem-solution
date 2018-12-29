#include<stdio.h>

int main()
{
    int a,i,m=0,n=0;
    while(scanf("%d",&a)==1)
    {
        m++;
        if(a<0)break;
        for(i=1;i<a;i=i+i)
        {
            n++;
        }
        printf("Case %d: %d\n",m,n);
        n=0;
    }
}
