#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int p=0,temp;
        for(int i=0;i<n;i++)
        {
            cin>>temp;
            if(temp%m==0){p++;}
        }
        if(p==0){cout<<0<<endl;continue;}
        long long int ans=1;
        for(int i=0;i<p;i++)
        {
            ans=ans*2;
        }
        cout<<ans-1<<endl;
    }
}
