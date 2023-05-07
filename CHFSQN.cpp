#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    long long int sum=0;
    if(n&1==1)
    {   int j=0;
        for(int i=n-1;i>n/2;i--)
        {
            sum+=abs(a[i]-a[j]+a[i]-a[j+1]);
            j++;
        }
        cout<<sum+a[n/2]-a[0]<<endl;
    }
    else{
        int j=0;
        for(int i=n-1;i>=n/2;i--)
        {
            sum+=abs(a[i]-a[j]+a[i]-a[j+1]);
            j++;
        }
        cout<<sum+a[n/2]-a[0]<<endl;
    }
}
