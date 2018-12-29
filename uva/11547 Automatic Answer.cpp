#include<iostream>
using namespace std;
int main ()
{
    int t,n,i,ans;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>n;
        ans = n*567;
        ans/=9;
        ans+=7492;
        ans*=235;
        ans/=47;
        ans-=498;
        ans%=100;
        ans/=10;
        if(ans<0){
                ans*=-1;
                cout<<ans<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}

