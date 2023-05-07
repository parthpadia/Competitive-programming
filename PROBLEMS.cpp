#include<bits/stdc++.h>
using namespace std;

bool sort_tool(pair<int,int> a,pair<int,int> b)
{
    if(a.first==b.first){return a.second>b.second;}
    return a.first>b.first;
}

int main()
{
    long long int p,s;
    cin>>p>>s;
    vector< vector < pair <int,int > > > arr;
    vector<pair<int,int> > count1;
    count1.resize(p);
    arr.resize(p);
    vector<int> temp;
    for(int i=0;i<2*p;i++)
    {
        if(i%2==0){
                for(int j=0;j<s;j++)
                {int faltu;
                cin>>faltu;
                temp.push_back(faltu);
                }
        }
            else{
                for(int j=0;j<s;j++)
                {int faltu;
                cin>>faltu;
                arr[(i-1)/2].push_back({temp[j],faltu});
                }
                temp.clear();
            }
    }
    for(int i=0;i<p;i++)
    {
        sort(arr[i].begin(),arr[i].end());
        /*for(int j=0;j<s;j++)
        {
            cout<<arr[i][j].first<<" "<<arr[i][j].second;
        }
        cout<<endl;*/
    }
    for(int i=0;i<p;i++)
    {int m=0;
        for(int j=0;j<s-1;j++)
        {
            if(arr[i][j].second>arr[i][j+1].second){m++;}
        }
        //cout<<endl<<i<<" "<<m;
        count1.push_back({m,i+1});
    }
    sort(count1.begin(),count1.end(),sort_tool);
    for(int i=p-1;i>=0;i--)
    {
        cout<<count1[i].second<<endl;
    }

}
