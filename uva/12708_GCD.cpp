#include <stdio.h>

int main()
{
    int t;
    long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
        if(n%2!=0)
        {
            n--;
        }
        printf("%ld\n",n/2);
    }
}
