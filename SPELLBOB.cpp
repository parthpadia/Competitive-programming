#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s,p;
    char a[3]={'b','o','b'};
    char b[3]={'o','b','b'};
    char c[3]={'b','b','o'};
    while(t--)
    {
        cin>>s>>p;
        int count=0;
        for(int i=0;i<3;i++)
        {
            if(s[i]==a[i] || p[i]==a[i]){count++;}
        }
        if(count==3){cout<<"yes"<<endl;continue;}
        count=0;
        for(int i=0;i<3;i++)
        {
            if(s[i]==b[i] || p[i]==b[i]){count++;}
        }
        if(count==3){cout<<"yes"<<endl;continue;}
        count=0;
        for(int i=0;i<3;i++)
        {
            if(s[i]==c[i] || p[i]==c[i]){count++;}
        }
        if(count==3){cout<<"yes"<<endl;continue;}
        cout<<"no"<<endl;
    }
}
