#include<stdio.h>
#include<string.h>

int main()
{
    int t,n,i,j,b,w,c,cas;
    char a[15];
    scanf("%d",&cas);
    for(i=1;i<=cas;i++)
    {
        scanf("%d",&n);
        b=c=w=t=0;
        scanf("%s",a);
        for(j=0;j<n;j++)
        {

            if(a[j]=='B')
            {
                b++;
            }
            else if(a[j]=='W')
            {
                w++;
            }
            else if(a[j]=='T')
            {
                t++;
            }
            else if(a[j]=='A')
            {
                c++;
            }
        }

        if(b+c==n && b!=0)printf("Case %d: BANGLAWASH\n",i);
        else if(w+c==n && w!=0)printf("Case %d: WHITEWASH\n",i);
        else if(c==n)printf("Case %d: ABANDONED\n",i);
        else if(b>w)printf("Case %d: BANGLADESH %d - %d\n",i,b,w);
        else if(b==w)printf("Case %d: DRAW %d %d\n",i,w,t);
        else if(w>b)printf("Case %d: WWW %d - %d\n",i,w,b);
    }
}
