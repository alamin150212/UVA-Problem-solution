#include<stdio.h>

int main()
{
    int i,j,n,t,mark[1002],c;
    double av,ans,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        sum=0.0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&mark[j]);
            sum+=mark[j];
        }
        av=sum/n;
        c=0;
        for(j=0;j<n;j++)
        {
            if(mark[j]>av)c++;
        }
        ans=c*100.0/n;
        printf("%.3lf%%\n",ans);

    }
}
