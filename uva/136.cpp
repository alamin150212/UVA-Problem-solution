#include<stdio.h>

int main()
{
    printf("The 1500'th ugly number is 859963392.\n");
}
///
#include<iostream>

using namespace std;
int main()
{
    long long int n,i,x,t,c;
    cin>>n;

    c=0;
    for(i=1; ; i++)
    {
        t=i;
        x=i;
        while(x%2==0)x/=2;
        while(x%3==0)x/=3;
        while(x%5==0)x/=5;

        if (x==1)
        {
            c++;
            cout<<t<<endl;

        }
        if(c==n)
        {
            cout<<c<<"th ugly is "<<t<<endl;
            break;
        }
    }
}
///
