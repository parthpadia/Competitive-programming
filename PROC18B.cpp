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
        long double a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(int i=0;i<n-1;i++)
        {
            a[i+1]=(a[i]+a[i+1])/2;
        }
        cout<<fixed<<setprecision(8)<<a[n-1]<<endl;
    }
}
