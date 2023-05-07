#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll psum[n]={0};
    psum[0]=a[0];
    for(int i=1;i<n;i++){
        psum[i]=psum[i-1]+a[i];
    }
    ll ans=0;
    for(int i=n-1;i>=1;i--){
        ans+=(a[i]*(i)-psum[i-1]);
    }
    cout<<ans;
}