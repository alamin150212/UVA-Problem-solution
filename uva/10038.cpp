#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int a[3005],i,j,n,b[3005],c;
    while(scanf("%d",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            b[i]=abs(a[i+1]-a[i]);
        }
        sort(b,b+i);
        c=1;
        for(i=1;i<n;i++)
        {
            if(b[i]==b[i-1])
            {
                c=0;
                break;
            }
        }
        if(c==1)printf("Jolly\n");
        else printf("Not jolly\n");
    }
}
