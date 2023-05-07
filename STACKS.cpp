#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,temp;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(v.size()==0)v.push_back(temp);
            else{
                if(v[v.size()-1]<=temp){
                    v.push_back(temp);
                }
                else{
                    vector<int>::iterator po=upper_bound(v.begin(),v.end(),temp);
                    int i=po-v.begin();
                    v[i]=temp;
                }
            }
        }
        cout<<v.size()<<" ";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}