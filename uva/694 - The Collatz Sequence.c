#include<stdio.h>

int main()
{
    long long int i,a,l,j,m=0;
    while(scanf("%lld%lld",&a,&l)==2)
    {
        if(a<0&&l<0)break;
        j=0;
        i=a;
        m++;
        while(a<=l)
        {
            j++;
            if(a==1){
                break;}
            if(a%2==0){
                a=a/2;}
            else{
                a=(3*a)+1;}

        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",m,i,l,j);
    }

}
