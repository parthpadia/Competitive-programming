#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll sum=0,ans=0;
    for(int i=0;i<n;i++){
        sum=a[i]*(n-i);
        ans=max(ans,sum);
    }
    cout<<ans;
}