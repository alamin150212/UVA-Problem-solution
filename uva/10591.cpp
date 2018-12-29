#include<stdio.h>

int main()
{
    int n,rem,ans,i,t,c,num;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&n);
        num=n;
        c=0;
        while(n>0)
        {
            if(n==1 || n==7)
            {
                c=1;
                break;
            }
            else if(n==2||n==3||n==4||n==5||n==6||n==8||n==9)
            {
                c=0;
                break;
            }
            ans=0;
            while(n!=0)
            {
                rem=n%10;
                ans+=rem*rem;
                n/=10;
            }
            n=ans;
        }
        if(c==1)printf("Case #%d: %d is a Happy number.\n",i,num);
        else printf("Case #%d: %d is an Unhappy number.\n",i,num);
    }
}
