#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    string fm,fn;
    cin>>fm>>fn;
    int q;
    cin>>q;
    int n=fn.length()+1;
    int m=fm.length()+1;
    int h[m]={0};
    int v[n]={0};
    for(int i=1;i<m;i++){
        if(fm[i-1]=='0'){
            h[i]=1;
        }
        else{
            h[i]=0;
        }
    }
    for(int i=1;i<n;i++){
        if(fn[i-1]=='0'){
            v[i]=1;
        }
        else{
            v[i]=0;
        }
    }
    //show (h,m);
    //show(v,n);
    int forh[m]={0};
    int forv[n]={0};
    if(h[1]==1 || v[1]==1){forh[1]=1;forv[1]=1;}
    for(int i=2;i<m;i++){
        if(h[i]==1){
            forh[i]=1;
        }
        else if(forh[i-1]==0){
            forh[i]=1;
        }
        else{
            forh[i]=0;
        }
    }
    for(int i=2;i<n;i++){
        if(v[i]==1){
            forv[i]=1;
        }
        else if(forv[i-1]==0){
            forv[i]=1;
        }
        else{
            forv[i]=0;
        }
    }
    //show(forh,m);
    //show(forv,n);
    int ansm[m]={0};
    int ansn[n]={0};
    if(forv[2]==0 || forh[2]==0){ansm[0]=1;ansn[0]=1;}
    for(int i=1,j=3;j<m;j++,i++){
        if(forh[j]==0 || ansm[i-1]==0){
            ansm[i]=1;
        }
    }
    for(int i=1,j=3;j<n;j++,i++){
        if(forv[j]==0 || ansn[i-1]==0){
            ansn[i]=1;
        }
    }
    //show(ansm,m);
    //show(ansn,n);
    while(q--){
        int x,y;
        cin>>x>>y;
        if(x==1){
            cout<<forh[y];
        }
        else if(y==1){
            cout<<forv[x];
        }
        else if(y>=x){
            cout<<ansm[y-x];
        }
        else{
            cout<<ansn[x-y];
        }
    }
    cout<<"\n";
    }
}
