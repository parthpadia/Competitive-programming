#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(ll *h,ll* g,ll n,ll mid,ll l,ll w){
    ll sum=0;
    for(int i=0;i<n;i++){
        if((h[i]+mid*g[i])>=l){
            sum=sum + h[i] + mid*g[i];
        }
        if(sum>=w)return true;
    }
    return false;
}

int main(){
    ll n,w,l;
    cin>>n>>w>>l;
    ll h[n],g[n];
    for(int i=0;i<n;i++){
        cin>>h[i]>>g[i];
    }
    ll low=0,high=1e18,mid;
    while(low<high){
        mid=(low+high)/2;
        //cout<<low<<" "<<high<<" "<<mid<<endl;
        if(check(h,g,n,mid,l,w)){
            high=mid;
        }
        else{
            low=mid+1;
        }
    }
    cout<<high<<endl;
}