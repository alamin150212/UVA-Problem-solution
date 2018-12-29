#include<stdio.h>

int main()
{
    int i,j,m,count,a,b,sum;
    while(scanf("%d%d",&a,&b)==2)
    {
        sum=0;
        printf("%d %d",a,b);
        if(a>b)
        {
            m=b;
            b=a;
            a=m;
        }
        for(i=a; i<=b; i++)
        {
            count=1;
            j=i;

            while(j>1)
            {
                if(j%2==0)
                {
                    j=j/2;
                }
                else
                {
                    j=(3*j)+1;
                }
                count++;
            }
            if(count>=sum)
            {
                sum=count;
            }
        }
        printf(" %d\n",sum);
    }

}
