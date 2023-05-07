#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int a[(n+1)/2]={0};
int b[(n)/2]={0};
for(int i=0;i<=(n+1)/2-1;i++){
a[i]=i+1;
}
for(int i=(n+1)/2,j=0;i<n;i++,j++){
    b[j]=i+1;
}
for(int i=0;i<(n+1)/2;i++){
    cout<<a[(i+1)%((n+1)/2)]<<" ";
}
for(int i=0;i<n/2;i++){
    cout<<b[(i+1)%(n/2)]<<" ";
}
cout<<endl;
for(int i=0;i<n;i++){
    if(i==0)cout<<n<<" ";
    else{
        cout<<i<<" ";
    }
}
}
