#include<bits/stdc++.h>
using namespace std;

vector< pair<int,int> > g[9][9];
queue<pair<int,int>> q;
bool visited[9][9];
int level [9][9];
int answer=0;

void initialize(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            visited [i][j]=false;
            level[i][j]=-1;
            //g[i][j].clear();
        }
    }
    while(!q.empty()){
        q.pop();
    }
    answer=0;
}

void bfs(pair<int,int> p,int k){
    q.push(p);
    pair<int,int> temp;
    while(!q.empty()){
        temp=q.front();
       // cout<<temp.first<<" "<<temp.second<<endl;
        if(k==level[temp.first][temp.second])return;
        visited[temp.first][temp.second]=true;
        q.pop();
        for(int j=0;j<g[temp.first][temp.second].size();j++){
if(visited[g[temp.first][temp.second][j].first][g[temp.first][temp.second][j].second]==false){  
            answer++;
            q.push(g[temp.first][temp.second][j]);
visited[g[temp.first][temp.second][j].first][g[temp.first][temp.second][j].second]=true;
level[g[temp.first][temp.second][j].first][g[temp.first][temp.second][j].second]=
    level[temp.first][temp.second] + 1;
            }
        }
    }
}

int main(){
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
            if(i>1){
            g[i][j].push_back({i-1,j});}
            if(i<8){
            g[i][j].push_back({i+1,j});}
            if(j>1){
            g[i][j].push_back({i,j-1});}
            if(j<8){
            g[i][j].push_back({i,j+1});}
            if(i>1 && j<8){
            g[i][j].push_back({i-1,j+1});}
            if(i>1 && j>1){
            g[i][j].push_back({i-1,j-1});}
            if(i<8 && j>1){
            g[i][j].push_back({i+1,j-1});}
            if(i<8 && j<8){
            g[i][j].push_back({i+1,j+1});}
        }
    }
    // for(int k=0;k<g[2][5].size();k++){
    //     cout<<g[2][5][k].first<<" "<<g[2][5][k].second<<endl;
    // }
    // cout<<endl;
    //     for(int k=0;k<g[1][3].size();k++){
    //     cout<<visited[g[1][3][k].first][g[1][3][k].second]<<endl;
    // }
    int t;cin>>t;
    while(t--){
    initialize();
    //answer=0;
    int x,y,k;
    cin>>x>>y>>k;
    // int dx=min(y+k,8)-max(y-k,1)+1;
    // int dy=min(x+k,8)-max(x-k,1)+1;
    // cout<<dx*dy<<endl;
    level[x][y]=0;
    bfs({x,y},k);
    //     for(int k=0;k<g[1][3].size();k++){
    //     cout<<visited[g[1][3][k].first][g[1][3][k].second]<<endl;
    // }
    cout<<answer+1<<endl;
    //cout<<endl;

    }
}