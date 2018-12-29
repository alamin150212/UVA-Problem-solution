#include<stdio.h>

int main()
{
    long int n,i,j,c;
    int bin[100];
    while(scanf("%lld",&n)==1 && n!=0)
    {
        c=0;
        for(i=0;n>0;i++)
        {
            bin[i]=(n%2);
            if(n%2==1)c++;
            n/=2;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--)
        {
            printf("%d",bin[j]);
        }
        printf(" is %ld (mod 2).\n",c);
    }
}
