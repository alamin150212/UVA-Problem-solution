#include<stdio.h>

int main()
{
    int l,h,i,j,k,t,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&l,&h);

        for(j=0;j<h;j++)
        {
            for(k=1;k<=l;k++)
            {
                for(m=1;m<=k;m++)
                {
                    printf("%d",k);
                }
                printf("\n");
            }

            k=l;
            k--;
            for(;k>0;k--)
            {
                for(m=1;m<=k;m++)
                {
                    printf("%d",k);
                }
                printf("\n");
            }
            if(j!=h-1)printf("\n");
        }
        if(i!=t-1)printf("\n");
    }
}
