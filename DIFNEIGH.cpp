#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[50][50]={0};
    int b[2][50]={0};
    for(int i=0;i<2;i++){
        for(int j=0;j<50;j++){
            if(i==0){
                if((j/3)%2==0){
                    b[i][j]=1;
                }
                else if((j/3)%2==1){
                    b[i][j]=2;
                } 
            }
            else if(i==1){
                if((j/3)%2==0){
                    b[i][j]=2;
                }
                else if((j/3)%2==1){
                    b[i][j]=1;
                }               
            }
            if((j+1)%3==0)b[i][j]=3;
        }
    }
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            if(i%2==0){
                if(i%4==0 && j%4==0){
                    a[i][j]=1;
                    a[i][++j]=1;
                }
                if(i%4==0 && j%4==2){
                    a[i][j]=2;
                    a[i][++j]=2;
                }
                if(i%4==2 && j%4==0){
                    a[i][j]=2;
                    a[i][++j]=2;
                }
                if(i%4==2 && j%4==2){
                    a[i][j]=1;
                    a[i][++j]=1;
                }
            }
            else {
                if(i%4==1 && j%4==0){
                    a[i][j]=3;
                    a[i][++j]=3;
                }
                if(i%4==1 && j%4==2){
                    a[i][j]=4;
                    a[i][++j]=4;
                }
                if(i%4==3 && j%4==0){
                    a[i][j]=4;
                    a[i][++j]=4;
                }
                if(i%4==3 && j%4==2){
                    a[i][j]=3;
                    a[i][++j]=3;
                }
            }
            
        }
    }
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==1 && y==1){
            cout<<1<<endl<<1<<endl;continue;
        }
        else if(x==1 && y==2){
            cout<<1<<endl;
            cout<<1<<" "<<1<<endl;
            continue;
        }
        else if(x==2 && y==1){
            cout<<1<<endl;
            cout<<1<<endl<<1<<endl;
            continue;
        }
        else if (x==2 && y==2){
            cout<<2<<endl;
            cout<<1<<" "<<1<<endl;
            cout<<2<<" "<<2<<endl;
        }
        else if(x==1 || y==1){
            cout<<2<<endl;
            if(x==1){
                for(int i=0;i<y;i++){
                    cout<<a[0][i]<<" ";
                }
                cout<<endl;
                continue;
            }
            if(y==1){
                for(int i=0;i<x;i++){
                    cout<<a[0][i]<<endl;
                }
                continue;
            }
            continue;
        }
        else if(x==2 || y==2){
            cout<<3<<endl;
            if(x==2){
                for(int i=0;i<y;i++){
                    cout<<b[0][i]<<" ";
                }
                cout<<endl;
                for(int i=0;i<y;i++){
                    cout<<b[1][i]<<" ";
                }
                cout<<endl;
                continue;
            }
            if(y==2){
                for(int i=0;i<x;i++){
                    cout<<b[0][i]<<" "<<b[1][i]<<endl;
                }
                continue;
            }
            continue;
        }
        else{
            cout<<4<<endl;
            for(int i=0;i<x;i++){
                for(int j=0;j<y;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}