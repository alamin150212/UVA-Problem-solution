#include<stdio.h>

int main()
{
    long long int fac,n,i;
    while(scanf("%lld",&n)==1)
    {

        if((n>=0 && n<8) || (n<0 && n%2==0))
        {
            printf("Underflow!\n");
        }
        else if(n>13 || (n<0 && n%2!=0))
        {
            printf("Overflow!\n");
        }
        else
        {
            fac=1;
            for(i=1; i<=n; i++)
            {
                fac*=i;
            }
            printf("%lld\n",fac);
        }
    }
}
