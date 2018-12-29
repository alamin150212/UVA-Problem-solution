#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int t,n,i,j,p,k,h,hortal[100000],pad[110];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        h=0;
        scanf("%d",&n);
        scanf("%d",&p);
        for(j=0; j<p; j++)
        {
            scanf("%d",&pad[j]);
        }
        for(j=0; j<p; j++)
        {
            for(k=pad[j]; k<=n; k+=pad[j])
            {
                if(k%7!=0 && k%7!=6)
                {
                    h++;
                    hortal[h-1]=k;
                }
            }
        }
        sort(hortal,hortal+h);
        k=0;
        for(j=1; j<h; j++)
        {
            if(hortal[j]==hortal[j-1])
            {
                k++;
            }
        }
        printf("%d\n",h-k);
    }

}
