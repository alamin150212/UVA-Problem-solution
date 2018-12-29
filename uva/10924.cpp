#include<stdio.h>
#include<math.h>
#include<string.h>

int prime(int n)
{
    int i,root;
    if(n==2)return 1;
    if(n%2==0)return 0;

    root=sqrt(n);
    for(i=3;i<=root;i=i+2)
    {
        if(n%i==0)return 0;
    }
    return 1;
}

int main()
{
    int n,j,l;
    char a[50];
    while(gets(a))
    {
        l=strlen(a);
        n=0;
        for(j=0;j<l;j++)
        {
            if(a[j]>='a'&&a[j]<='z')
            {
                n+=(a[j]-96);
            }
            else
            {
                n+=(a[j]-38);
            }
        }
        if(prime(n)==1)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }
    }
}
