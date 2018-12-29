#include <stdio.h>
int main ()
{
    int a,b,x,ans,y ;
    while (scanf("%d %d",&a,&b)==2 && a>= 0 && b>= 0 )
    {
        ans=100 ;
        if (b>a)
        {
            x=b-a ;
            y=100-x ;
        }
        else
        {
            x=a-b ;
            y=100-x ;
        }
        if (ans>x) ans=x ;
        if (ans>y) ans=y ;

        printf ("%d\n",ans) ;
    }
}
