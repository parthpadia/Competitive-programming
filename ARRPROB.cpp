#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int p;
    while(t--)
    {
        cin>>p;
        long long int a[p]={0},sum=0;
        for(int i=0;i<p;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<p;i++)
        {
            cout<<sum-a[i]<<" ";
        }
        cout<<endl;
    }
}
