#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){

    int n;
    cin>>n;

    vector <long long int> arr(1000007,0);

    long long int sub=0;
    long long int even=0;
    long long int odd=0;
    long long int maxi=0;
    long long int ans=0;
    for(int i=0;i<n;i++){
    long long int temp;
    cin>>temp;
    if(temp>maxi){maxi=temp;}
    arr[temp]++;
    if(temp&1)odd++;
    else if(temp%2==0){even++;}
    }
    for(long long int i=1;i<=maxi;i++){
        if(arr[i]>=1 && (i%4)==1 && arr[i+2]>=1){
            sub+=(arr[i]*arr[i+2]);
        }
        else if(arr[i]>=1 && (i%4)==0 && arr[i+2]>=1){
            sub+=(arr[i]*arr[i+2]);
        }
    }
    for(long long int i=0;i<=maxi;i++){
        if(arr[i]>1){
            sub=sub+((arr[i]*(arr[i]-1))/2);
        }
    }
    //cout<<even<<" "<<odd<<" "<<sub<<endl;
    ans+=(even*(even-1))/2;
    ans+=(odd*(odd-1))/2;
    ans-=sub;
    cout<<ans<<endl;
}
}
