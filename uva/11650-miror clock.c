#include<stdio.h>

int main()
{
    int i,t,a,b;
    char c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %c %d",&a,&c,&b);
        if(a==12 && b==0)printf("%2.2d%c%2.2d\n",a,c,b);
        else if(a==12&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",11,c,60-b);

        if(a==1 && b==0)printf("%2.2d%c%2.2d\n",11,c,b);
        else if(a==1&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",10,c,60-b);

        if(a==2 && b==0)printf("%2.2d%c%2.2d\n",10,c,b);
        else if(a==2&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",9,c,60-b);

        if(a==3 && b==0)printf("%2.2d%c%2.2d\n",9,c,b);
        else if(a==3&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",8,c,60-b);

        if(a==4 && b==0)printf("%2.2d%c%2.2d\n",8,c,b);
        else if(a==4&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",7,c,60-b);

        if(a==5 && b==0)printf("%2.2d%c%2.2d\n",7,c,b);
        else if(a==5&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",6,c,60-b);

        if(a==6 && b==0)printf("%2.2d%c%2.2d\n",6,c,b);
        else if(a==6&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",5,c,60-b);

        if(a==7 && b==0)printf("%2.2d%c%2.2d\n",5,c,b);
        else if(a==7&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",4,c,60-b);

        if(a==8 && b==0)printf("%2.2d%c%2.2d\n",4,c,b);
        else if(a==8&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",3,c,60-b);

        if(a==9 && b==0)printf("%2.2d%c%2.2d\n",3,c,b);
        else if(a==9&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",2,c,60-b);

        if(a==10 && b==0)printf("%2.2d%c%2.2d\n",2,c,b);
        else if(a==10&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",1,c,60-b);

        if(a==11 && b==0)printf("%2.2d%c%2.2d\n",1,c,b);
        else if(a==11&&b>=1&&b<=59)printf("%2.2d%c%2.2d\n",12,c,60-b);
    }
}
