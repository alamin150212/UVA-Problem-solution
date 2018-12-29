#include<stdio.h>
#include<math.h>

int main()
{
    long long int lwr,up,i,j,t,cas,max,divisor,maxnum;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&lwr,&up);
        max=0;
        for(i=lwr;i<=up;i++)
        {
            divisor=0;
            for(j=1;j<=sqrt(i);j++)
            {
                if(i%j==0)
                {
                    divisor++;
                    if(i/j!=j)divisor++;
                }

            }
            if(max<divisor)
            {
                max=divisor;
                maxnum=i;
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",lwr,up,maxnum,max);
    }
}
