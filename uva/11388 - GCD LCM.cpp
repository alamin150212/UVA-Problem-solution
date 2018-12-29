#include<iostream>
using namespace std;
int main()
{
    int g,l,t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>g>>l;
        if(l%g==0)
            cout<<g<<" "<<l<<endl;
        else
            cout<<"-1"<<endl;
    }
}
