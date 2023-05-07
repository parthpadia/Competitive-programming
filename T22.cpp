#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int p[25]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mi=100,m=0;
        sort(a,a+n);
        if(a[0]!=1){cout<<-1<<endl;continue;}
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<25;j++)
            {
                if(a[i]==p[j]){cout<<a[i]<<endl;m=1;break;}
            }
            if(m==1)break;
        }
        if(m==0){cout<<-1<<endl;}
    }
}
