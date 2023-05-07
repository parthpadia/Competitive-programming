#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int l,d,s,c;
        int p=0;
        cin>>l>>d>>s>>c;
        if(s>=l){cout<<"ALIVE AND KICKING"<<endl;continue;}
        for(int i=0;i<d-1;i++)
        {
            s=s+c*s;
            if(s>=l){cout<<"ALIVE AND KICKING"<<endl;p=1;break;}
        }
        if(p==1){continue;}
        cout<<"DEAD AND ROTTING"<<endl;
    }
}
