#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        int a[n];
        for(long int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<(n*(n-1))/2;
        cout<<endl;
    }
}
