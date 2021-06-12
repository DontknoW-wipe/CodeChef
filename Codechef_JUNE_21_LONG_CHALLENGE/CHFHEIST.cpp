#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve()
{
    ll D,d,p,q;
    cin>>D>>d>>p>>q;
    ll sum=0;
    ll k=D/d;

    if(D%d==0)
    {
    sum+=((p*k)+(q*(k-1)*k)/2)*d;
    }
    else{
    sum+=((p*k)+(q*(k-1)*k)/2)*d;
        ll r=D%d;
        sum=sum+(r*(p+(k*q)));
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
