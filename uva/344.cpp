#include<stdio.h>

int main()
{
    int n,i,j,v,x,l,c;
    while(scanf("%d",&n)==1)
    {
        i=v=x=l=c=0;
        if(n==0)break;
        for(j=1; j<=n; j++)
        {
            if(j%10==1 || j%10==4 || j%10==6 || j%10==9)i++;
            if(j%10==2 || j%10==7)i+=2;
            if(j%10==3 || j%10==8)i+=3;

            if(j%10==4 || j%10==5 || j%10==6 || j%10==7 || j%10==8)v++;

            if(j>=9 && j<19 || j>=40 && j<49 || j>=59 && j<69 || j>=90 && j<99)x++;
            if(j>=19 && j<29 || j==49 || j>=69 && j<79 || j==99)x+=2;
            if(j>=29 && j<39 || j>=79 && j<89 )x+=3;
            if(j==39 || j==89)x+=4;

            if(j>=40 && j<90)l++;

            if(j>=90)c++;
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,i,v,x,l,c);
    }
}
