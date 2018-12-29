#include<stdio.h>
#include<math.h>

int main()
{
    int n,c,j,i,flag,root,a,b[100];
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        flag=0;
        a=n;
        root=sqrt(n);
        for(i=0,j=2;n!=1;j++)
        {
            if(n%j==0)
            {
                b[i]=j;
                n/=j;
                i++;
                j=1;
            }
            else if(j>=root && i==0)
            {
                flag=1;
                break;
            }
        }
        c=0;
        if(flag==1)printf("%d : 1\n");
        else
        {
            for(j=0;j<i;j++)
            {
                if(b[j]!=b[j-1])c++;
            }
            printf("%d : %d\n",a,c);
        }

    }
}
