#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,m=0;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
      if(n==1 && a[0]!=1){cout<<"NO"<<endl;continue;}
      if(a[0]==1){cout<<"YES"<<endl;continue;}
      int g=gcd(a[0],a[1]);
      if(g==1){cout<<"YES"<<endl;continue;}
      for(int i=2;i<n;i++)
      {
          g=gcd(g,a[i]);
          if(g==1){cout<<"YES"<<endl;m=1;break;}
      }
      if(m==0){cout<<"NO"<<endl;}
    }
}
