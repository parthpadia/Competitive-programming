#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(a.length()>=b.length())
        {int j=0;
            for(int i=0;i<a.length();i++)
            {
                if(a[i]==b[j]){j++;}
                if(j==b.length()){break;}
            }
            if(j==b.length()){cout<<"YES"<<endl;continue;}
            else{cout<<"NO"<<endl;continue;}
        }
        else
        {
            int j=0;
            for(int i=0;i<b.length();i++)
            {
                if(b[i]==a[j]){j++;}
                if(j==a.length()){break;}
            }
            if(j==a.length()){cout<<"YES"<<endl;continue;}
            else{cout<<"NO"<<endl;}
        }
    }
}
