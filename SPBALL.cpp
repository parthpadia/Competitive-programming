#include <iostream>
using namespace std;

long long int mod = 10e8 + 7;
long long int arr[1000005];

long long int fact(){
    arr[0]=1;
    arr[1]=1;
    for(long long int i=2;i<1000005;i++){
        arr[i] = (arr[i-1]*i)%mod;
    }
    return 0;
}

int main() {
    fact();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int ans = 0;
        int val;
        for(int i=0;i<n;i++){
            cin>>val;
            ans = (ans + arr[val])%mod;
            ans = ans%mod;
        }
        cout<<ans<<endl;
    }
	return 0;
}
