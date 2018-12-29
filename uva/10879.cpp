#include<stdio.h>
#include<math.h>

int main()
{
    long long int t,n,i,j,c;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&n);
        c = 0;
        printf("Case #%lld: %lld",i,n);
        for(j=2; j<sqrt(n)+1; j++)
        {
            if(n%j == 0)
            {
                printf(" = %lld * %lld",j,n/j);
                c++;
            }
            if(c == 2)
                break;

        }
        printf("\n");
    }
}
