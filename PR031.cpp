#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void matmul(ll a[3][3],ll b[3][3]){
ll c[3][3]{0};

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            c[i][j]+=(a[i][k]*b[k][j]);
        }
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        a[i][j]=c[i][j];
    }
}
}

void expmul(ll a[3][3], ll n)
{
    ll m[3][3]={{1,1,1},{1,0,0},{0,1,0}};
    if(n==0 || n==1)return;
    else if (n%2==0){
        expmul(a,n/2);
        matmul(a,a);
    }
    else{
        expmul(a,n/2);
        matmul(a,a);
        matmul(a,m);
    }
}
int main(){
while(1){
    ll n;
    cin>>n;
    if(n==-1)break;
    if(n==0){cout<<0<<endl;continue;}
    if(n==1 || n==2){cout<<1<<endl;continue;}
    ll a[3][3]={{1,1,1},{1,0,0},{0,1,0}};
    expmul(a,n-1);
    cout<<a[0][0]<<endl;
}
}
