#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int min2=a[n-1];
    int min1;
    for(int i=0;i<n-1;i++){
        min1=abs(a[i]-a[i+1]);
        if(min1<min2){min2=min1;}
    }
    cout<<min2<<endl;
}

}
