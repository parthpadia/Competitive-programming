#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
ll t;
cin>>t;
while(t--){
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        if(k-a[i]>=0){
            k-=a[i];
            cout<<1;
        }
        else{cout<<0;}
    }
    cout<<endl;
}

}
