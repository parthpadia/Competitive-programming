#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    vector <char> cap;
    vector <char> small;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){cap.push_back(s[i]);}
        else{small.push_back(s[i]);}
    }
    for(int i=0;i<cap.size();i++){
        cout<<cap[i];
    }
    for(int i=0;i<small.size();i++){
        cout<<small[i];
    }
    cout<<endl;
}

}
