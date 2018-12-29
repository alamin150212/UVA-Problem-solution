#include<stdio.h>

int main()
{
    int n,a[10],i,j,flag,c2,c1;
    scanf("%d",&n);
    printf("Lumberjacks:\n");
    while(n--)
    {
        c1=c2=0;
        for(i=0;i<10;i++)
            scanf("%d",&a[i]);

        for(i=0;i<9;i++)
        {
            if(a[i]>a[i+1])
            {
                c2++;
            }
            else if(a[i]<a[i+1])
            {
                c1++;
            }
        }
        if(c1==9 || c2==9)printf("Ordered\n");
        else printf("Unordered\n");
    }
}
