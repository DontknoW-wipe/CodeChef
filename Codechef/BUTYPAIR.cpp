#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++) cin>>a[i];

	// ll res=0;
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<n;j++)
	// 	{
	// 		if(i!=j)
	// 		{
	// 			double y1=(double)(a[i]-a[j])/a[i];
	// 			double y2=(double)(a[i]-a[j])/a[j];
	// 			if(y1<y2)
	// 			{
	// 				cout<<"("<<i+1<<","<<j+1<<")"<<endl;
	// 				res++;
	// 			}
	// 		}
	// 	}
	// }
	ll f=n*n;
	f=f-n;
	map<ll,ll> mp;
	for(ll i=0;i<n;i++)
	{
		mp[a[i]]++;
	}
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		if(it->second>1)
		{
			ll k=it->second;
			k=k*(k-1);
			f=f-k;
		}
	}
	cout<<f<<endl;

}
int main()
{
	speed_karo
	int t;cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}