#include<stdio.h>
#include<string.h>

int main()
{
    char s[10000];
    int i,flag=0,l;
    while(gets(s))
    {
        l=strlen(s);
        for(i=0; i<l; i++)
        {
            if(s[i]=='"' && flag==0)
            {
                printf("``");
                flag=1;
            }
            else if(s[i]=='"' && flag==1)
            {
                printf("''");
                flag=0;
            }
            else printf("%c",s[i]);
        }
        printf("\n");
    }
}
