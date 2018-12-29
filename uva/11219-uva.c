#include<stdio.h>
int main()
{
    int t,i,dc,mc,yc,db,mb,yb,d;
    while(scanf("%d",&t)==1)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d/%d/%d",&dc,&mc,&yc);
            scanf("%d/%d/%d",&db,&mb,&yb);
            d = (yc-yb);
            if(mc<mb){
                d--;
            }
            else if(mc==mb){
                if(dc<db){
                    d--;
                }
            }
            if(d<0)printf("Case #%d: Invalid birth date\n",i);
            else if(d>130)printf("Case #%d: Check birth date\n",i);
            else printf("Case #%d: %d\n",i,d);
        }
    }
}
