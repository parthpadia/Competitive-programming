#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==1){cout<<"1 1"<<endl;continue;}
        if(n%2==0)
        {
            cout<<"1 1";
            for(int i=1;i<=n/2;i++)
            {
                cout<<"0";
            }
            cout<<endl;
            continue;
        }
        else
        {
            cout<<"1 1";
            n=ceil(n/2);
            for(int i=1;i<=n;i++)
            {
                cout<<"0";
            }
            cout<<endl;
        }
    }
}
