#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        int a[n];
        int max=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>max){max=a[i];}
        }
        int t[max+1]={0};
        for(int i=0;i<n;i++)
        {
            t[a[i]]++;
        }
        for(int i=0;i<max+1;i++)
        {
            if(t[i]>0){count++;}
        }

        cout<<count<<endl;

    }
}
