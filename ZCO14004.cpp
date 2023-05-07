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
    ll i[n]={0};
    ll e[n]={0};
    i[0]=a[0];e[0]=0;i[1]=a[0]+a[1];e[1]=a[0];i[2]=a[2]+max(a[0],a[1]);e[2]=a[0]+a[1];
    for(int p=3;p<n;p++){
        i[p]=a[p] + max(e[p-2]+a[p-1],e[p-1]);
        e[p]=max(i[p-1],e[p-1]);
    }
    cout<<max(i[n-1],e[n-1]);
}