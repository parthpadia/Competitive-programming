#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                if(i==0 && s[i+1]=='0'){count++;continue;}
                if(i==n-1 && s[i-1]=='0'){count++;continue;}
                if(s[i+1]=='0' && s[i-1]=='0'){count++;}

            }
        }
        cout<<count<<endl;
    }
}
