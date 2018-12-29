#include<stdio.h>
#include<string.h>

int main()
{
    char s[105];
    int t,i,j,l,line=0;
    scanf("%d",&t);
    getchar();
    for(j=1; j<=t; j++)
    {
        if(line==1)printf("\n");
        line = 1;
        while(gets(s))
        {
            l=strlen(s);
            if(l==0)break;
            for(i=0; i<l; i++)
            {
                if(s[i]=='1')s[i]='I';
                else if(s[i]=='3')s[i]='E';
                else if(s[i]=='0')s[i]='O';
                else if(s[i]=='2')s[i]='Z';
                else if(s[i]=='4')s[i]='A';
                else if(s[i]=='9')s[i]='P';
                else if(s[i]=='5')s[i]='S';
                else if(s[i]=='8')s[i]='B';
                else if(s[i]=='7')s[i]='T';
                else if(s[i]=='6')s[i]='G';
            }
            puts(s);
        }
    }
}
