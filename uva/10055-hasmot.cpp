#include<stdio.h>

int main()
{
    long long int a,b,res,temp;
    while(1)
    {
        scanf("%lld %lld",&a,&b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        res=b-a;
        printf("%lld\n",res);
    }
}
