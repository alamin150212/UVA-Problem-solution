#include<iostream>

using namespace std;

int main()
{
    int i,t;
    double t1,t2,f,a,ct1,ct2,ct3,ct,sum;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>t1>>t2>>f>>a>>ct1>>ct2>>ct3;
        if(ct1<=ct2&&ct1<=ct3)
        {
            ct = (ct2+ct3)/2.0;
        }
        else if(ct2<=ct1&&ct2<=ct3)
        {
            ct = (ct1+ct3)/2.0;
        }
        else if(ct3<=ct1&&ct3<=ct2)
        {
            ct = (ct1+ct2)/2.0;
        }
        sum = t1+t2+f+a+ct;

        if(sum>=90)
        {
            cout<<"Case "<<i<<": "<<"A"<<endl;
        }
        else if(sum<90&&sum>=80)
        {
            cout<<"Case "<<i<<": "<<"B"<<endl;
        }
        else if(sum<80&&sum>=70)
        {
            cout<<"Case "<<i<<": "<<"C"<<endl;
        }
        else if(sum<70&&sum>=60)
        {
            cout<<"Case "<<i<<": "<<"D"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": "<<"F"<<endl;
        }

    }
}
