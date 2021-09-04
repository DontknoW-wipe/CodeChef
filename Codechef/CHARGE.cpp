#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);
void solve()
{
	ll n,input1;
	cin>>n;
	vector<pair<pair<ll,ll>,ll>> v(n);
	vector<vector<ll>> res;
	for(ll i=0;i<n;i++)
	{
		cin>>input1;
		v[i].first.first=input1;	
	}
	for(ll i=0;i<n;i++)
	{
		cin>>input1;
		v[i].first.second=input1;
		v[i].second=i+1;
	}
	sort(v.begin(),v.end());
	ll low=0,high;
	for(ll i=0;i<v.size();i++)
	{
		if(v[i].first.first>v[i].first.second)
		{
			continue;
		}
		high=v[i].first.first+low;
		if(high<=v[i].first.second)
		{
			res.push_back({v[i].second,low,high});
			low=high;
		}

	}
	cout<<res.size()<<endl;
	for(ll i=0;i<res.size();i++)
	{
		for(ll j=0;j<3;j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
  speed_karo
  ll q;
  cin>>q;
  while(q--)
  {
  	solve();
  }
  return 0;
}

/*
4
5
31 32 6 13 7
14 50 34 4 31
5
43 26 22 11 30
26 4 41 46 49
5
36 40 49 19 37
18 11 48 15 33
5
16 3 24 21 21
24 31 36 49 50


3
3 0 6 
5 6 13 
2 13 45 
2
4 0 11 
3 11 33 
0
3
2 0 3 
1 3 19 
4 19 40 

*/