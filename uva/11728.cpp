#include<iostream>

using namespace std;
int factors_sum(int);
int main()
{
    int s,i,cas=1;
    while(cin>>s && s!=0)
    {
        for(i=s; i>=0; i--)
        {
            if(factors_sum(i)==s)
            {
                cout<<"Case "<<cas++<<": "<<i<<endl;
                break;
            }
            else if(i==0)cout<<"Case "<<cas++<<": -1"<<endl;
        }
    }
}
int factors_sum(int n)
{
    int i,a=1;
    for(i=n;i>1;i--)
    {
        if(n%i==0) a+=i;
    }
    return a;
}
