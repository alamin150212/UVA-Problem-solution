#include<stdio.h>

int main()
{
    int b1,c1,g1,b2,c2,g2,b3,c3,g3,ans[6],i,count,min;
    while(scanf("%d%d%d%d%d%d%d%d%d",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
    {
        ans[0]=g1+c1+b2+g2+b3+c3;
        ans[1]=g1+c1+b2+c2+b3+g3;
        ans[2]=b1+g1+g2+c2+b3+c3;
        ans[3]=b1+g1+b2+c2+g3+c3;
        ans[4]=b1+c1+g2+c2+b3+g3;
        ans[5]=b1+c1+b2+g2+g3+c3;
        min=ans[0];
        count=0;
        for(i=1;i<=5;i++)
        {
            if(ans[i]<min)
            {
                min=ans[i];
                count=i;
            }
        }
        if(count==0)printf("BCG %d\n",min);
        else if(count==1)printf("BGC %d\n",min);
        else if(count==2)printf("CBG %d\n",min);
        else if(count==3)printf("CGB %d\n",min);
        else if(count==4)printf("GBC %d\n",min);
        else printf("GCB %d\n",min);
    }
}
