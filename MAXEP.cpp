#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,c;
    cin>>n>>c;
    int low=1,high=n,mid,res,m=1000;
    while(low<high){
        //cout<<low<<" "<<high<<" ";
        mid=(9*low+high)/10;
        cout<<1<<" "<<mid<<endl<<flush;
        m--;
        cin>>res;
        if(res==1){
            high=mid;
            cout<<2<<endl<<flush;
            m-=c;
        }
        else if(res==0){
            low=mid+1;
        }
    }
    cout<<3<<" "<<low<<endl;
}