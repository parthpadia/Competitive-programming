#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n+1]={0};
    for(int i=0;i<n;i++){
        ll temp;
        cin>>temp;
        if(temp<=n){
            a[temp]=1;
        }
    }
    ll count=0;
    for(ll i=1;i<n+1;i++){
        if(a[i]==0)count++;
    }
    cout<<count<<endl;
}
}
