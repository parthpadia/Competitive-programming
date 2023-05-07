#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    int a[26];
    for(int i=0;i<26;i++)
    {
        a[i]=s[i]-'a';
    }
    char p;
    while(t--)
    {
        string k;
        cin>>k;
        for(int i=0;i<k.length();i++)
        {
            if(isalpha(k[i]) && k[i]==tolower(k[i]))
            {
                cout<<char(a[k[i]-'a']+'a');
                continue;
            }
            if(isalpha(k[i]) && k[i]==toupper(k[i]))
            {
                k[i]=tolower(k[i]);
                p=char(a[k[i]-'a']+'a');
                p=toupper(p);
                cout<<p;
                continue;
            }
            if(k[i]=='_'){cout<<" ";continue;}
            cout<<k[i];
        }
        cout<<endl;
    }
}
