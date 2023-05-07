#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
while(t--)
	{
	int n;
	cin>>n;
	char a[n][n];
	int Rows[n][n]={0};
	int Col[n][n]={0};
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		cin>>a[i][j];
		Rows[i][j]=0;
		Col[i][j]=0;
		}
	}
	for(int i=n-1;i>=0;i--){
	if(a[i][n-1]=='.'){Rows[i][n-1]=1;}
		for(int j=n-2;j>=0;j--){
		if(a[i][j]=='.'){Rows[i][j]=Rows[i][j+1];}
		else{Rows[i][j]=0;}
		}
	}
	for(int j=n-1;j>=0;j--){
	if(a[n-1][j]=='.'){Col[n-1][j]=1;}
		for(int i=n-2;i>=0;i--){
		if(a[i][j]=='.'){Col[i][j]=Col[i+1][j];}
		else{Col[i][j]=0;}
		}
	}
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
        if(Rows[i][j]==1 && Col[i][j]==1)count++;
	}
	}
	cout<<count<<endl;
    }
}