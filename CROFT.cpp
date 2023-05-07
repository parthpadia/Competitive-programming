#include<bits/stdc++.h>
using namespace std;

bool comp(pair <int,int> a,pair <int,int> b){
    if(a.first>b.first){
        return true;
    }
    return b.first<b.second;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        vector <pair <int,int> > d;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            d.push_back({a[i]+b[i],i});
        }
        sort(d.begin(),d.end(),comp);
        // for(int i=0;i<n;i++){
        //     cout<<d[i].first<<" "<<d[i].second<<"     ";
        // }
        long long int lara=0,joan=0;
        int p=0,q=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                lara = lara + a[d[i].second];
            }
            else{
                joan = joan + b[d[i].second];
            }
        }
        //cout<<lara<<" "<<joan<<endl;
        if(lara>joan)cout<<"First"<<endl;
        else if(joan>lara)cout<<"Second"<<endl;
        else{
            cout<<"Tie"<<endl;
        }
    }
}