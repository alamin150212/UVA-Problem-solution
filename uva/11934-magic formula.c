#include<stdio.h>
int main()
{
    int a,b,c,d,l,i,count;
    long long int ans;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&l)==5)
    {
        count = 0;
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        {
            break;
        }
        for(i=0;i<=l;i++)
        {
            ans = (a*i*i)+(b*i)+c;
            if(ans%d==0)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
}
