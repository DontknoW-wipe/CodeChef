#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);
#define Mod 1000000007
ll power(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b%2!=0)
        {
            res=(res*a)%Mod;
        }
        a=(a*a)%Mod;
        b=b/2;
    }
    return res;
}
void solve()
{
 	ll n,m;
 	cin>>n>>m;
 	ll res=power(2,n)-1;
 	cout<<power(res,m)<<endl;
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
