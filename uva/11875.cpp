#include<stdio.h>

int main()
{
    int t,i,n,j,a[11],tem,k;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        for(k=1; k<n; k++)
        {
            for(j=n-1; j>=k; j--)
            {
                if(a[j]>a[j-1])
                {
                    tem=a[j-1];
                    a[j-1]=a[j];
                    a[j]=tem;
                }
            }
        }

        printf("Case %d: %d\n",i,a[n/2]);
    }
}
