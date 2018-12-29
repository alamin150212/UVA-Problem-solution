#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000];
    int i,sum,l;
    while(1)
    {
        scanf("%s",a);
        l=strlen(a);
        sum=0;
        if(a[0]=='0'&&l==1)break;

        for(i=0;i<l;i++)
        {
            sum=sum*10+(a[i]-48);
            sum=sum%11;
        }
        if(sum==0)printf("%s is a multiple of 11.\n",a);
        else printf("%s is not a multiple of 11.\n",a);
    }
}
