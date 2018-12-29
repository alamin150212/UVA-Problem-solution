#include<stdio.h>
#include<string.h>

int digit_sum(int n)
{
    int ans=0;
    while(n!=0)
    {
        ans+=(n%10);
        n/=10;
    }
    return ans;
}
int main()
{
    char name1[30],name2[30];
    int i,l1,l2,sum,sum1;
    double ans;
    while(gets(name1))
    {

        gets(name2);
        l1=strlen(name1);
        l2=strlen(name2);
        sum=sum1=0;
        for(i=0; i<l1; i++)
        {
            if(name1[i]>='a'&&name1[i]<='z')
            {
                sum=sum+(name1[i]-96);
            }
            else if(name1[i]>='A'&&name1[i]<='Z')
            {
                sum=sum+(name1[i]-64);
            }
        }
        for(i=0; i<l2; i++)
        {
            if(name2[i]>='a'&&name2[i]<='z')
            {
                sum1=sum1+(name2[i]-96);
            }
            else if(name2[i]>='A'&&name2[i]<='Z')
            {
                sum1=sum1+(name2[i]-64);
            }
        }
        while(sum>=10)
        {
            sum=digit_sum(sum);
        }
        while(sum1>=10)
        {
            sum1=digit_sum(sum1);
        }
        if(sum>=sum1)ans=(sum1*100.0)/sum;
        else ans=(sum*100.0)/sum1;

        printf("%.2lf %%\n",ans);
    }
}
