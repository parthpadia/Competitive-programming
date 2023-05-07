#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		long long int sum=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='1')sum++;
		}
		cout<<(((sum*(sum-1))/2) + sum)<<endl;
	}
}