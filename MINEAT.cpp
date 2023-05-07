#include<bits/stdc++.h>
using namespace std;

#define ll long long int

bool check(ll* a,ll n,ll mid,ll k){
    ll sum=0;
    for(int i=0;i<n;i++){
        sum=sum + (a[i]+mid-1)/mid;
        if(sum>k)return false;
    }
    return true;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        //cout<<t<<endl;
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            //cout<<a[i]<<" ";
        }
        ll low=0,high=1e18,mid;
        while(low<high){
            mid=(low+high)/2;
            //cout<<low<<" "<<high<<" "<<mid<<endl;
        if(check(a,n,mid,k)){
            high=mid;
        }
        else{
            low=mid+1;
        }
        }
        cout<<high<<endl;
    }
}