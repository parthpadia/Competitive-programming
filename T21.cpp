#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,p;
        cin>>s>>p;
        int sl=s.length();
        int pl=p.length();
        long long int rem1;
        rem1=(s[0]-'0')%3;
        for(int i=1;i<s.length();i++)
        {
            rem1=((rem1%3)+((s[i]-'0')%3))%3;
        }
        if(rem1==0){cout<<0<<endl;continue;}
        long long int rem2;
        rem2=(p[0]-'0')%3;
        for(int i=1;i<p.length();i++)
        {
            rem2=((rem2%3)+((p[i]-'0')%3))%3;
        }
        cout<<(rem1*rem2)%3<<endl;
    }
}
