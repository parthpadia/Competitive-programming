#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int n;string s;
    while(t--)
    {
        cin>>n;
        cin>>s;
        char p[n];
        if(n%2==0)
        {
            for(int i=0;i<=n-2;i=i+2)
            {
                p[i]=(25-(s[i+1]-'a')+'a');
                p[i+1]=(25-(s[i]-'a')+'a');
            }
            for(int i=0;i<n;i++)
            {
                cout<<p[i];
            }
            cout<<endl;continue;
        }
        else
        {
            p[n-1]=(25-(s[n-1]-'a')+'a');
            for(int i=0;i<=n-3;i=i+2)
            {
                p[i]=(25-(s[i+1]-'a')+'a');
                p[i+1]=(25-(s[i]-'a')+'a');
            }
            for(int i=0;i<n;i++)
            {
                cout<<p[i];
            }
            cout<<endl;continue;        }
    }
}
