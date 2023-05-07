#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int sum1=0;
    for(int i=0;i<k;i++){
        sum+=a[i];
        sum1+=a[i];
    }
    for(int i=0;i<=n-1-k;i++)
    {
        sum1=sum1-a[i]+a[i+k];
        if(sum1>sum){sum=sum1;}
    }
    cout<<sum<<endl;
}

}
