#include<stdio.h>
int main()
{
    int i,carry;
    unsigned long a,b,c,d;
    while(scanf("%lu %lu",&a,&b)==2)
    {
        i=0;
        carry=0;
        if(a==0 && b==0)break;
        while(a||b)
        {
            c=a%10;
            d=b%10;

            if(carry+c+d>=10)
            {
                carry=1;
                i++;
            }
            else
            {
                carry=0;
            }
            a=a/10;
            b=b/10;
        }
        if(i==0)printf("No carry operation.\n");
        else if(i==1)printf("1 carry operation.\n");
        else printf("%d carry operations.\n",i);
    }
}
