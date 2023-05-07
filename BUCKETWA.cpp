#include<bits/stdc++.h>
using namespace std;

long double x,y,z,k;
long double ep=1e-4;

long double check(long double p){
    return sqrt((p*p + x*x)) + k*(sqrt((z-p)*(z-p) + y*y));
}

int main(){
    while(1){
        cin>>x>>y>>z>>k;
        if(x==0 && y==0 && z==0 && k==0)break;
        long double low=0,high=z,mid;
        while(high>low + ep){
            mid=low + (high-low)/2;
            //cout<<low<<" "<<high<<" "<<mid<<endl;
            if(check(mid)>check(mid+ep) ){
                low=mid;
            }
            else {
                high=mid;
            }
        }
        //cout<<setprecision(5)<<fixed<<high<<endl;
        cout<<setprecision(5)<<fixed<<sqrt((high*high + x*x)) + (sqrt((z-high)*(z-high) + y*y))<<endl;
    }
}