#include<stdio.h>

int main()
{
    int n,t,a[51],temp,i,j,k,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        c=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=1;j<n;j++)
        {
            for(k=n-1;k>=j;k--)
            {
                if(a[k-1]>a[k])
                {
                    temp=a[k-1];
                    a[k-1]=a[k];
                    a[k]=temp;
                    c++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);
    }
}
