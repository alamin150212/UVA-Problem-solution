#include<stdio.h>

int main()
{
    int n,a[1001],temp,i,j,c;
    while(scanf("%d",&n)==1)
    {

        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<n;i++)
        {
            for(j=n-1;j>=i;j--)
            {
                if(a[j-1]>a[j])
                {
                    temp=a[j-1];
                    a[j-1]=a[j];
                    a[j]=temp;
                    c++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",c);
    }
}

