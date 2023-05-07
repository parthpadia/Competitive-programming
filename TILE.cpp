#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll MOD = 1000000007;

void matmul(ll a[2][2],ll b[2][2])
{
ll c[2][2]={0};
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        for(int k=0;k<2;k++){
            c[i][j]+=(a[i][k]*b[k][j])%MOD;
            c[i][j]=(c[i][j])%MOD;
        }
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        a[i][j]=c[i][j];
    }
}
/*
ll x=((a[0][0]*b[0][0])%MOD + (a[0][1]*b[1][0])%MOD)%MOD;
ll y=((a[0][0]*b[0][1])%MOD + (a[0][1]*b[1][1])%MOD)%MOD;
ll z=((a[1][0]*b[0][0])%MOD + (a[1][1]*b[1][0])%MOD)%MOD;
ll w=((a[1][0]*b[0][1])%MOD + (a[1][1]*b[1][1])%MOD)%MOD;
a[0][0]=x;
a[0][1]=y;
a[1][0]=z;
a[1][1]=w;*/
}

void expmul(ll a[2][2],ll n)
{
    ll m[2][2]={0};
    m[0][0]=1;m[0][1]=1;m[1][0]=1;
    if(n==1 || n==0){
        return;
    }
    if(n%2==0){
        expmul(a,n/2);
        matmul(a,a);
    }
    if(n%2==1){
        expmul(a,n/2);
        matmul(a,a);
        matmul(a,m);
    }
}

int main(){
ll t;
cin>>t;
while (t--){
    ll n;
    cin>>n;
    ll a[2][2]={0};
    a[0][0]=1;a[0][1]=1;a[1][0]=1;a[1][1]=0;
    expmul(a,n);
    cout<<a[0][0]<<endl;
}
}
