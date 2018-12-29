#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char st[1000],a;
    while(gets(st))
    {
        for(i=0;i<strlen(st);i++)
        {
            a = st[i]-7;
            st[i] = a;
        }
        puts(st);
    }
}
