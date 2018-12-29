#include<stdio.h>
#include<math.h>

int prime(int);
int main()
{
    int n,i;
    while(scanf("%d",&n)==1)
    {
        for(i=3;i<n-2;i+=2)
        {
            if(prime(i)==1)
            {
                if(prime(n-i)==1)
                {
                    printf("%d = %d + %d\n",n,i,n-i);
                    break;
                }
            }
        }
    }
}
int prime(int i)
{
    if(i==3)return 1;
    int j,s,flag=1;
    s=sqrt(i)+1;
    for(j=2;j<=s;j++)
    {
        if(i%j==0)
        {
           flag=0;
           break;
        }
    }
    if(flag==0)return 0;
    else return 1;
}
