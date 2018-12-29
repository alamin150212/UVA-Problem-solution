#include<stdio.h>


int main()
{
    long a[20],i,j,n,mul,max,cas=0;
    while(scanf("%ld",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        max=0;
        for(i=0;i<n;i++)
        {
            mul=1;
            for(j=i;j<n;j++)
            {
                mul*=a[j];
                if(mul>max)max=mul;
            }
        }
        cas++;
        printf("Case #%ld: The maximum product is %ld.\n\n",cas,max);
    }
}
