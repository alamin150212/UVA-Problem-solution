#include<stdio.h>
int main()
{
    char ch[6];

    int i=1,len;
    while(1)
    {
        scanf("%s",&ch);
        len = strlen(ch);
        if(ch[0]=='*')break;
        else if(len==4)printf("Case %d: Hajj-e-Akbar\n",i);
        else printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }

}
