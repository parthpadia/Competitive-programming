#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,p=0;
    cin>>n;
    int ma=-1;
    long long int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        sum=(sum+temp)%n;
        a[i]=sum;
        if(a[i]==0 && ma==-1){ma=i;}
    }
    if(ma!=-1){
        cout<<ma+1<<endl;
        for(int i=0;i<=ma;i++){
            cout<<i+1<<" ";
        }
        cout<<endl;
        continue;
    }
    for(int i=0;i<n-1;i++){
     for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            cout<<j-i<<endl;
            for(int k=i+1;k<=j;k++){
                cout<<k+1<<" ";
            }
            cout<<endl;
            p=1;
            break;
        }
     }
     if(p==1)break;
    }
    if(p==1)continue;
    cout<<-1<<endl;
}

}
