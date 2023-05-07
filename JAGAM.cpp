#include<bits/stdc++.h>
using namespace std;

bool fin(long long int n,long long int arr[],long long int a,long long int b){
for(int i=0;i<n;i++){
    if(arr[i]==a || arr[i]==b){return true;}
}
return false;

}

int main(){
int t;
cin>>t;
while(t--){
    long long int n,a,b,temp,sum=0;
    cin>>n>>a>>b;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>temp;
        arr[i]=abs(temp);
    }
    sort(arr,arr+n);
    bool found=false;
    for(int i=0;i<n;i++){
        if(abs(arr[i])==abs(a)){cout<<1<<endl;found=true;break;}

    }
    if(found==true){continue;}
    for(int i=0;i<n;i++){
        if(abs(arr[i])==abs(b)){cout<<1<<endl;found=true;break;}
    }
    if(found==true){continue;}
    if(a==0 || b==0){cout<<2<<endl;continue;}
    if(a*b>0){
      cout<<0<<endl;
      continue;
    }
    if(a*b<0)
    {   int flag=0;
        for(int i=0;i<n;i++){
            bool ans1 = fin(n,arr,abs(arr[i]-a),abs(arr[i]-b));
            bool ans2 = fin(n,arr,abs((-1*arr[i])-a),abs((-1*arr[i])-b));

            if(ans1==false || ans2==false) {flag=1;}
            if(flag==1){break;}
        }
        if(flag==1){cout<<0<<endl;}
        if(flag==0){cout<<2<<endl;}
    }
}


}
