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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long int count=0;
        for(int i=1;i<n;i++)
        {
            count+=a[i]-a[0];
        }
        cout<<count<<endl;
    }
}
