#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    long long int n;
    while(t--)
    {
        cin>>n;
        long long int count=0;
        long long int sum1=0,sum2=0,sum3=0;
        vector<int> a;
        if(n==1){cout<<2<<endl;continue;}
        if(n==2){cout<<1<<endl;continue;}
        while(n)
        {
            a.push_back(n%2);
            if(n%2==1){count++;}
            n/=2;
        }
        /*for(int i=0;i<a.size();i++)
        {
            cout<<a[i];
        }
        cout<<endl;*/
        if(count==1){cout<<1<<endl;continue;}
        if(count==2){cout<<0<<endl;continue;}
        for(int i=a.size()-2;i>=0;i--)
        {
            if(a[i]==1){
                for(int j=i-1;j>=0;j--)
                {
                    if(a[j]==1){sum1+=(long long int)pow(2,j);}
                }
            sum2=sum1;
            if(a[i+1]!=1){sum2=pow(2,i+1)-pow(2,i)-sum1;}
            sum3=sum1;
            if(a[i+1]==1){
                sum3=pow(2,i+2)-pow(2,i)-pow(2,i+1)-sum1+1;
            }
                break;
            }
        }
        //cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;
        cout<<min(sum1,min(sum3,sum2))<<endl;;
    }
}
