#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,m;
    cin>>n>>m;
    vector <string> cw;
    vector <string> str;
    int x=0;
    for(int i=0;i<2*n;i++){
        string temp;
        cin>>temp;
        if(x==0){cw.push_back(temp);x=1;continue;}
        if(x==1){str.push_back(temp);x=0;}
    }
    bool found=false;
    for(int i=0;i<n;i++){
        if(cw[i][0]=='c' && found==false){
            for(int j=0;j<m;j++){
                if(str[i][j]=='0'){cout<<"INVALID"<<endl;found=true;break;}
            }
        }
        if(found==true){break;}
    }
    if(found==true){continue;}
    for(int i=0;i<n;i++){
        if(cw[i][0]=='w' && found==false){
            int p=1;
            for(int j=0;j<m;j++){
                p=p*(str[i][j]-'0');
            }
        if(p==1){cout<<"WEAK"<<endl;found=true;break;}
        }
    }
    if(found==true){continue;}
    cout<<"FINE"<<endl;

}

}
