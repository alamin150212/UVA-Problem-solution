#include<stdio.h>

int main()
{
    int t,n,a[50],i,j,l,h;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }
        l=0;
        h=0;
        for(j=1; j<n; j++)
        {
            if(a[j] >a[j-1])
            {
                h++;
            }
            else if(a[j] <a[j-1])
            {
                l++;
            }
        }
        printf("Case %d: %d %d\n",i,h,l);
    }
}
