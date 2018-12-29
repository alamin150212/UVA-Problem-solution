#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,sum;
    char s[100];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(s);
        j=0;
        sum=0;
        for(i=0;i<strlen(s);i++,j++)
        {
            if(s[i]=='O')
            {
                sum+=(j+1);
            }
            else j=-1;
        }
        printf("%d\n",sum);
    }
}
