#include<stdio.h>
#include<string.h>

int main()
{
    long int i,j,l,c,m,a,c1,n;
    char st[100000],se[100000],s[100000];
    while(gets(s))
    {
        l=strlen(s);
        c=0;
        for(i=0;s[i]!=' ';i++)
        {
            se[i]=s[i];
            c++;
        }
        m=0;
        for(j=c+1;j<l;j++)
        {
            st[m]=s[j];
            m++;
        }
        a=0;
        c1=0;
        for(i=0; i<c; i++)
        {
            for(j=a; j<m; j++)
            {
                if(st[j]==se[i])
                {
                    c1++;
                    a=j+1;
                    break;
                }
            }
        }
        if(c==c1)printf("Yes\n");
        else printf("No\n");
    }
}
