#include<stdio.h>
int main()
{
    long int n,m;
    while(scanf("%ld",&n)==1)
    {
        if(n<0)
        {
            break;
        }
        else
        {
            m = n*(n+1)/2+1;
            printf("%ld\n",m);
        }
    }
}
