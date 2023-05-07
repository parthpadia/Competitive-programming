#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1]={0};
    int m;
    cin>>m;
    int b,c;
    for(int i=0;i<m;i++)
    {
        cin>>b>>c;
        for(int i=b;i<=c;i++)
        {
            a[i]++;
        }
    }
    sort(a,a+n+1);
    int q,p;
    cin>>q;
    while(q--)
    {
        cin>>p;
        cout<<(a+n+1)-lower_bound(a,a+n+1,p);
        cout<<endl;
    }
}
