#include<stdio.h>
#include<algorithm>

using namespace std;
long int n,a[2000005],i;
int main()
{

    while(scanf("%ld",&n)==1)
    {
        if(n==0)break;

        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(i==n-1)printf("%ld",a[i]);
            else printf("%ld ",a[i]);
        }
        printf("\n");
    }
}
