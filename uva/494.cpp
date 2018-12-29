#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000];
    int i,l,c,flag;
    while(gets(ch))
    {
        c=0;
        flag=1;
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            if(ch[i]>='A'&&ch[i]<='Z'||ch[i]>='a'&&ch[i]<='z')
            {
                if(flag==1)
                {
                    c++;
                    flag=0;
                }
            }
            else
            {
                flag=1;
            }
        }
        printf("%d\n",c);
    }
}
