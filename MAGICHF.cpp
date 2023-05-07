#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n,c,z;
    cin>>n>>c>>z;
    for(int i=0;i<z;i++){
        int a,b;
        cin>>a>>b;
        if(a==c){
            c=b;
            continue;
        }
        else if(b==c){
            c=a;
            continue;
        }
    }
    cout<<c<<endl;
}


}
