#include<stdio.h>

int main()
{
    long int n,i,ans;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%ld",&n)==1)
    {
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }
        else
        {
            ans=0;
            for(i=1;i<=n/2;i++)
            {
                if(n%i==0)
                {
                    ans+=i;
                }
            }
            if(ans==n)printf("%5ld  PERFECT\n",n);
            else if(ans>n)printf("%5ld  ABUNDANT\n",n);
            else printf("%5ld  DEFICIENT\n",n);
        }

    }
}
