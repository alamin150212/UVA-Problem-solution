#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int i,j,l,c4,c15,c55,c100,c400,c=0;
    while(gets(s))
    {
        l=strlen(s);
        c4=c15=c55=c100=c400=0;
        if(c>0)printf("\n");
        c++;
        for(i=0;i<l;i++)
        {
            c4=(c4*10+(s[i]-48))%4;
            c15=(c15*10+(s[i]-48))%15;
            c55=(c55*10+(s[i]-48))%55;
            c100=(c100*10+(s[i]-48))%100;
            c400=(c400*10+(s[i]-48))%400;
        }
        if(c4==0&&c100!=0||c400==0)
        {
            printf("This is leap year.\n");
            if(c55==0)printf("This is bulukulu festival year.\n");
            if(c15==0)printf("This is huluculu festival year.\n");
        }
        else
        {
            if(c15==0)printf("This is huluculu festival year.\n");
            else printf("This is an ordinary year.\n");
        }
    }
}
