#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        long double sum=a+b;
        long double prod=a*b;
        long double x1=(sum+sqrt(sum*sum-3*prod))/3;
        long double x2=(sum-sqrt(sum*sum-3*prod))/3;
        long long x3;
        if(x2<=x1){x3=x2;}
        else{x3=x1;}
        long long v1=x3*(a-x3)*(b-x3);
        long long v2=(x3+1)*(a-x3-1)*(b-x3-1);
        if(v1>=v2){cout<<x3<<" "<<v1<<endl;continue;}
        cout<<x3+1<<" "<<v2<<endl;
    }
}
