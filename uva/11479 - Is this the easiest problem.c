#include<stdio.h>
int main()
{
    int t,i;
    long int a,b,c;
    scanf("%d",&t);
    while(t<20)
    {
        for(i=1; i<=t; i++)

        {
            scanf("%ld %ld %ld",&a,&b,&c);

            while(3)
            {
                if(((a+b)<=c) || ((a+c)<=b) || (b+c)<=a)
                {
                    printf("Case %d: Invalid\n",i);
                    break;
                }
                if(a==b && a==c && b==c)

                {
                    printf("Case %d: Equilateral\n",i);
                    break;
                }
                if(a==b  || a==c || b==c)
                {
                    printf("Case %d: Isosceles\n",i);
                    break;
                }
                if(a!=b && a!=c && b!=c)
                {
                    printf("Case %d: Scalene\n",i);
                    break;
                }
            }
        }
        break;
    }
    return 0;
}

