#include<stdio.h>
int main()
{
    int h1,m1,h2,m2;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4)
    {
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        else if(h2>=h1 && m2>=m1)
        {
            printf("%d\n",(h2-h1)*60+(m2-m1));
        }
        else if(h2>h1 && m2<m1)
        {
            printf("%d\n",(h2-h1)*60-(m1-m2));
        }
        else if(h1==h2 && m1>m2)
        {
            printf("%d\n",1440-(m1-m2));
        }
        else if(h1>h2 && m1==m2)
        {
            printf("%d\n",1440-(h1-h2)*60);
        }
        else if(h1>h2 && m1>m2)
        {
            printf("%d\n",1440-(h1-h2)*60-(m1-m2));
        }
        else if(h1>h2 && m2>m1)
        {
            printf("%d\n",1440-(h1-h2)*60+(m2-m1));
        }

    }
}
