#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    long long n;
    while(t--)
    {
        cin>>n;
        long long j=1;
        while(1)
        {
            if((j*(j+1))/2==n)
            {
                cout<<j<<endl;
                break;
            }
            if((j*(j+1))/2>n)
            {
                cout<<-1<<endl;
                break;
            }
            j++;
        }
    }
}
