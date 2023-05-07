#include<bits/stdc++.h>
using namespace std;

int d=1000000009;

long long int pow_mod(long long int b,long long int pow)
{
    if(pow==0){return 1;}
    long long int p=pow_mod(b,pow/2);
    p=(p*p)%d;
    if(pow%2==0)return p;
    else{return (p*b)%d;}
}



long long int inv_mod(long long int a)
{
    long long int inv_b=pow_mod(a,d-2);
    return inv_b%d;
}

int main()
{
    long long int n,q,b,c;
    cin>>n>>q;
    long long int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>b>>c;
        a[i]=(4*b*c)+(2*max(b,c));
    }
    sort(a,a+n);
    long long int check;
    while(q--)
    {
        cin>>check;
        check=check*(check+1);
        if(check<a[0] || check>a[n-1]){cout<<-1<<endl;continue;}
        long long int count=0;
        long long int flag=lower_bound(a,a+n,check)-a;
        for(long long int i=flag;i<n;i++)
        {
            if(a[i]==check){count++;}
            else{break;}
        }
        if(count==0){cout<<-1<<endl;}
        if(count==1){cout<<1<<endl;}
        if(count>1){cout<<inv_mod(count)<<endl;}
    }

}
