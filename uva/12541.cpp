#include<iostream>

using namespace std ;
int main ()
{
    int n,i,j,d,m,y,x,a[150],pos[150];
    string s[150];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i]>>d>>m>>y;
        x=(y*365)+(m*30)+d;
        a[i]=x;
        pos[i]=i;
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
                swap(pos[i],pos[j]);
            }
        }
    }
    cout<<s[pos[n-1]]<<endl<<s[pos[0]]<<endl;
}
