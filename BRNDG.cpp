#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int k=0;
        while(n!=0)
        {
            if(n&1==1){k++;}
            n=n>>1;
        }
        cout<<k<<endl;
    }
}
