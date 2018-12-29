#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000];
    int i,l,sum;
    while(gets(s))
    {
        l=strlen(s);
        sum=0;
        if(l==1 && s[0]=='0')break;
        for(i=0;i<l;i++)
        {
            sum=sum*10+(s[i]-48);
            sum=sum%17;
        }

        if(sum==0)printf("1\n");
        else printf("0\n");
    }
}
