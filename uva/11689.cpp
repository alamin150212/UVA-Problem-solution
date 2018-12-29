#include<stdio.h>

int main()
{
    int t,i,e,f,c,ans,sum,rem,a;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&e,&f,&c);
        ans=0;
        sum=(e+f)/c;
        rem=(e+f)%c;
        ans+=sum;
        while((sum+rem)>=c)
        {
            a=sum+rem;
            sum=a/c;
            rem=a%c;
            ans+=sum;
        }
        printf("%d\n",ans);
    }
}
