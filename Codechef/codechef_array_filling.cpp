#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);
void solve()
{
	ll n,m;
	cin>>n>>m;
	vector<pair<ll,ll>> v;
	for(ll i=0;i<m;i++)
	{
		ll x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),greater<pair<ll,ll>>());
	ll LCM=1,REM=n,res=0;
	for(ll i=0;i<m&&REM>0;i++)
	{
		ll x=v[i].first,y=v[i].second;
		LCM=LCM*y/__gcd(LCM,y);
		res+=(REM-n/LCM)*x;
		REM=n/LCM;
	}
	cout<<res<<endl;
}
int main()
{
  speed_karo
  ll t;
  cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}