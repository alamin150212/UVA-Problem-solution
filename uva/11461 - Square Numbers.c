#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,i;
    while(scanf("%d %d",&a,&b))
    {
        if(a==0&&b==0)break;
        d=0;
        for(i=a; i<=b; i++)
        {
            c=sqrt(i);
            if (i==c*c)
                d++;
        }
        printf("%d\n",d);
    }
    return 0;
}
