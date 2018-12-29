#include<stdio.h>
int main()
{
    int i,t,s1,s2,s3;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&s1,&s2,&s3);
        if(s1>s3&&s2<s3 || s2>s3&&s1<s3)
        {
            printf("Case %d: %d\n",i,s3);
        }
        else if(s3>s1&&s1>s2 || s1>s3&&s2>s1)
        {
            printf("Case %d: %d\n",i,s1);
        }
        else
        {
            printf("Case %d: %d\n",i,s2);
        }
    }
}
