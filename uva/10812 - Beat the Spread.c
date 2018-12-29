#include<stdio.h>

int main()
{
    int n,s,d,a,b;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&s,&d);
        a=(s-d)/2;
        b=((s-d)/2)+d;
        if(s<d||(a+b)!=s)
        {
            printf("impossible\n");
        }
        else
        {
            printf("%d %d\n",b,a);
        }
    }
}
