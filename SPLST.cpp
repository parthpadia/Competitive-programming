#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long int a,b,c,x,y;
    while(t--)
    {
        cin>>a>>b>>c>>x>>y;
        if(a+b+c==x+y)
        {
            if(a<=x && b<=y && a+c>=x && b+c>=y){cout<<"YES"<<endl;continue;}
            if(a<=y && b<=x && a+c>=y && b+c>=x){cout<<"YES"<<endl;continue;}
            if(b<=x && c<=y && b+a>=x && c+a>=y){cout<<"YES"<<endl;continue;}
            if(b<=y && c<=x && b+a>=y && c+a>=x){cout<<"YES"<<endl;continue;}
            if(c<=x && a<=y && c+b>=x && a+b>=y){cout<<"YES"<<endl;continue;}
            if(c<=y && a<=x && c+b>=y && a+b>=x){cout<<"YES"<<endl;continue;}
        }
        cout<<"NO"<<endl;
    }
}
