#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAX_v=1e6;
void solve()
{
    ll n;
    cin>>n;
    ll a[MAX_v];
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n+1);
    ll forwardGcd[MAX_v],backwardGcd[MAX_v];
    forwardGcd[1]=a[1];
    backwardGcd[n]=a[n];
    for(ll i=2;i<=n;i++)
    {
        forwardGcd[i]=__gcd(forwardGcd[i-1],a[i]);
    }
    for(ll i=n-1;i>=2;i--)
    {
        backwardGcd[i]=__gcd(backwardGcd[i+1],a[i]);
    }
    
    ll res=LLONG_MAX;
    for(ll i=1;i<=n;i++)
    {
        ll rr=(sum-a[i]+__gcd(forwardGcd[i-1],backwardGcd[i+1]))/__gcd(forwardGcd[i-1],backwardGcd[i+1]);
        if(rr<res)
        {
            res=rr;
        }
    }
    cout<<res<<endl;
}
int main()
{	speed_karo
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
