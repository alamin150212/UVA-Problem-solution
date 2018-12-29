#include<stdio.h>
#include<string.h>

int main()
{
    int c1,c2,j,i,t,len;
    char s[20];
    scanf("%d",&t);
    getchar();
    for(j=1; j<=t; j++)
    {
        gets(s);
        len=strlen(s);
        if(len==3)
        {
            for(i=0; i<len; i++)
            {
                c1=0;
                c2=0;
                if(s[i]=='o'||s[i]=='O')
                    c1++,c2++;
                else if(s[i]=='n'||s[i]=='N')
                    c1++;
                else if(s[i]=='e'||s[i]=='E')
                    c1++;
                else if(s[i]=='t'||s[i]=='T')
                    c2++;
                else if(s[i]=='w'||s[i]=='W')
                    c2++;
            }
            if(c1>c2)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
        else if(len==5)
        {
            printf("3\n");
        }
    }
    return 0;

}
