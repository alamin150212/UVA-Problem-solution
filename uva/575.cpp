#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char s[100];
    long long int i,l,j,ans;
    while(1)
    {
        gets(s);
        l=strlen(s);
        ans=0;
        if(s[0]=='0')break;
        for(i=0; i<l; i++)
        {
            s[i]=s[i]-48;
        }

        for(i=l,j=0; i>=1; i--,j++)
        {
            ans += (s[j]*(pow(2,i)-1));
        }
        printf("%lld\n",ans);
    }
}
