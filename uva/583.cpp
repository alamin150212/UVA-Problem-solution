#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,fctr[100],i,root,flag;
    while(scanf("%d",&a)==1)
    {
        if(a==0)break;
        if(a==1 || a==-1)continue;
        flag=0;
        c=a;
        if(a<0)a*=-1;

        root=sqrt(a);
        for(b=2,i=0; a!=1; b++)
        {
            if(a%b==0)
            {
                fctr[i]=b;
                i++;
                a/=b;
                b=1;
            }
            else if(b>=root && i==0)
            {
                flag=1;
                break;
            }
        }
        printf("%d = ",c);
        if(c<0 && flag==1)printf("-1 x %d\n",-c);
        else if(c>0 && flag==1)printf("%d\n",c);
        else
        {
            if(c<0)printf("-1 x ");
            for(b=0; b<i; b++)
            {
                if(b==i-1)printf("%d\n",fctr[b]);
                else printf("%d x ",fctr[b]);
            }
        }
    }
}
