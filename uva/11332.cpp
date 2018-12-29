#include<stdio.h>

int main()
{
    long n;
    while(scanf("%ld",&n)==1)
    {
        if(n==0)break;
        while(n>=10)
        {
            n = (n/10)+(n%10);
        }
        printf("%ld\n",n);
    }
}
