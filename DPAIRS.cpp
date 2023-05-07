#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,pi,pj;
    long long int b;
    long long int x,y;
    cin>>x>>y;
    a=1e9;b=-1e9;
    long long int temp;
    for(int i=0;i<x;i++){
        cin>>temp;
        if(temp<a){
            a=temp;
            pi=i;
        }
    }
    for(int i=0;i<y;i++){
        cin>>temp;
        if(temp>b){
            b=temp;
            pj=i;
        }
    }
    for(int i=0;i<y;i++){
        cout<<pi<<" "<<i<<endl;
    }
    for(int i=0;i<x;i++){
        if(i==pi)continue;
        cout<<i<<" "<<pj<<endl;
    }
    
}