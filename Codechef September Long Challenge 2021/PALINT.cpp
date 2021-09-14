/*
	https://www.codechef.com/SEPT21B/problems/PALINT

	XOR Equal

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
ll maxP(ll a,ll b)
{
	if(a>b)
	{
		return a;
	}
	return b;
}
ll minP(ll a,ll b)
{
	if(a<b)
	{
		return a;
	}
	return b;
}
void solve()
{
	ll n,x;
	cin>>n>>x;
	vector<ll> v(n);
	map<ll,ll> mp;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		mp[v[i]]++;
	}
	if(n==1)
	{
		cout<<1<<" "<<0<<endl;
		return;
	}
	int ans1=0,ans2=0;
	for(auto it:mp)
	{
		if(it.second==n)
		{
			ans1=it.second;
			break;
		}
		if(it.second>=ans1)
		{
			ans1=it.second;
		}
	}
	if(x==0)
	{
		cout<<ans1<<" "<<0<<endl;
		return;
	}
	for(auto it:mp)
	{
         if(mp[(it.first)^x]>0)
         {
             if(it.second + mp[(it.first)^x]>ans1)
             {
                 ans1 = it.second + mp[(it.first)^x];
                 ans2 = minP(it.second,mp[(it.first)^x]);
             }
             else if(it.second + mp[(it.first)^x]==ans1)
             {
                 if(minP(it.second,mp[(it.first)^x]) < ans2)
                 {
                     ans2 = minP(it.second, mp[(it.first)^x]);
                 }
             }
         }
     }
	cout<<ans1<<" "<<ans2<<endl;
	// cout<<endl;
}
int main()
{
  SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB
  int t=1;cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}