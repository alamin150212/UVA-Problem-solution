#include<stdio.h>

int main()
{
    long long int n,i,sum,a,j,c;
    while(scanf("%lld",&n)==1)
    {
        c=1;
        for(i=1;i<n;i+=2)
        {
            c++;
        }
        a=c*c;
        sum=0;
        j=a;
        for(i=1;i<=3;i++)
        {
            sum+=(2*j)-1;
            j--;
        }
        printf("%lld\n",sum);

    }
}
