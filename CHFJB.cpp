#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int t;
  cin>>t;
  int a[10001]={0};
  for(int i=2;i<=10000;i++)
  {
      for(int j=i;j<=10000;j=j+i)
      {
          a[j]++;
      }
  }
  while(t--)
  {
      int n;
      cin>>n;
      if(a[n]-1){cout<<a[n]-1<<endl;}
      else{cout<<-1<<endl;}
  }
}
