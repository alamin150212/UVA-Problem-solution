#include<stdio.h>
int main()
{
    int a,b,c,d,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);

        if(a==b && b==c && c==d && d==a)
        {
            printf("square\n");
        }
        else if(a==c && b==d || a==b && c==d || a==d && b==c)
        {
            printf("rectangle\n");
        }
        else if((b+c+d)>=a && (a+c+d)>=b && (a+b+d)>=c && (a+b+c)>=d)
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }
    }
}
