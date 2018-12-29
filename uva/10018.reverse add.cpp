#include<stdio.h>

int main()
{
    long int n,c,a,rv,i,t;
    scanf("%ld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%ld",&n);
        c=0;
        rv=0;
        while(n!=rv)
        {
            n+=rv;
            rv=0;
            a=n;
            c++;
            while(a>0)
            {

                rv=rv*10+a%10;
                a/=10;

            }

        }
        printf("%ld %ld\n",c-1,rv);
    }

}


