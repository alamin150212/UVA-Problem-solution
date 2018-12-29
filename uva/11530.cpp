#include<stdio.h>
#include<string.h>

int main()
{
    char sms[120];
    int i,j,t,c,l;
    scanf("%d",&t);
    getchar();
    for(i=1; i<=t; i++)
    {
        gets(sms);
        l=strlen(sms);
        c=0;
        for(j=0; j<l; j++)
        {
            if(sms[j]=='a'||sms[j]=='d'||sms[j]=='g'||sms[j]=='j'||sms[j]=='m')
            {
                c++;
            }
            else if(sms[j]=='p'||sms[j]=='t'||sms[j]=='w'||sms[j]==' ')
            {
                c++;
            }
            else if(sms[j]=='b'||sms[j]=='e'||sms[j]=='h'||sms[j]=='k'||sms[j]=='n')
            {
                c+=2;
            }
            else if(sms[j]=='q'||sms[j]=='u'||sms[j]=='x')
            {
                c+=2;
            }
            else if(sms[j]=='c'||sms[j]=='f'||sms[j]=='i'||sms[j]=='l')
            {
                c+=3;
            }
            else if(sms[j]=='o'||sms[j]=='r'||sms[j]=='v'||sms[j]=='y')
            {
                c+=3;
            }
            else if(sms[j]=='s'||sms[j]=='z')
            {
                c+=4;
            }
        }
        printf("Case #%d: %d\n",i,c);
    }

}

