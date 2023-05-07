#include<bits/stdc++.h>
using namespace std;

bool comp(string a,string b){
    //cout<<a<<" "<<b<<endl;
    if(a.length()>b.length() && a[0]!='0'){
        //cout<<"case 1 "<<a<<" "<<b<<endl;
        return false;
    }
    else if(a.length()==b.length() && a>b){
        //cout<<"case 2 "<<a<<" "<<b<<endl;
        return false;
    }
    else if(a>b && b[0]=='0')return false;
    //cout<<"kuch nahi"<<endl;
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a[n];
        for(int i=0;i<n;i++){
            string temp;
            cin>>temp;
            int k=0;
            a[i]=temp;
        }
        sort(a,a+n,comp);
        for(int i=n-1;i>=0;i--){
            cout<<a[i]<<" ";
        }
    }
}