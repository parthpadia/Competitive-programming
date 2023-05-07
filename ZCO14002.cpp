#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
long long int ans;
long long int x[n],y[n];
long long int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];

x[0]=arr[0];y[0]=0;x[1]=arr[1];y[1]=0;x[2]=arr[2];
y[2]=min(arr[0],arr[1]);

for(int i=3;i<n;i++){
    x[i]=min(x[i-1],y[i-1])+arr[i];
    y[i]=min(x[i-1],x[i-2]);
}
cout<<min(x[n-1],y[n-1]);
}
