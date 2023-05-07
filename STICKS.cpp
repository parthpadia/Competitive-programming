#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int count=0,b=0,d=0;
        for(int i=n-1;i>=0;i--){
            if(a[i]==a[i-1]){
                if(b==0){
                    b=a[i];
                    i--;
                    count++;
                }
                else{
                    d=a[i];
                    i--;
                    count++;
                }
            }
            if(count>=2)break;
        }
        if(count<=1){cout<<-1<<endl;continue;}
        else{cout<<d*b<<endl;}
    }
}