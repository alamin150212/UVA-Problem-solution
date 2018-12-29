#include<stdio.h>
int main()
{
    int i,j,b,t,a,s;
    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%d",&a);
        s=0;
        for(j=1;j<=a;j++)
        {
            scanf("%d",&b);
            if(b>=s)
            {
                s=b;
            }
        }
        printf("Case %d: %d\n",i,s);
    }

}
