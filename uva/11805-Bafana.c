#include<stdio.h>
int main()
{
    int i,t,n,p,k,P;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d",&n,&k,&p);
        P = (k+p)%n;
        if(P==0)
        {
            printf("Case %d: %d\n",i,n);
        }
        else
        {
            printf("Case %d: %d\n",i,P);
        }
    }

}
