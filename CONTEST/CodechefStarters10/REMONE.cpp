/*

  https://www.codechef.com/START10B/problems/REMONE

  Remove One Element 

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);
bool checkVowel(char c)
{
	if(c=='A'||c=='I'||c=='O'||c=='U'||c=='E') return true;
	return false;
}
void solve()
{
  int n;
  cin>>n;
  vector<ll> a,b;
  for(int i=0;i<n;i++)
  {
    ll x;cin>>x;
    a.push_back(x);
  }
  for(int i=0;i<n-1;i++)
  {
    ll x;cin>>x;
    b.push_back(x);
  }
  map<ll,ll> mp;
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  for(int i=0;i<n-1;i++)
  {
    ll x1=b[i]-a[i];
    ll x2=b[i]-a[i+1];
    if(x1!=x2)
    {
      if(x1>0)
      {
        mp[x1]++;
      }
      if(x2>0)
      {
        mp[x2]++;
      }
    }
    else{
      if(x1>0)
      {
        mp[x1]++;
      }
    }
  }
  ll res=LLONG_MAX;
  for(auto it=mp.begin();it!=mp.end();it++)
  {
    if(it->second==n-1)
    {
      if(it->first<res)
      {
        res=it->first;
      }
    }
  }
  cout<<res<<endl;
}
int main()
{
  speed_karo
  int t;cin>>t;
  for (int i = 0; i < t; ++i)
  {
  	// cout<<"Case #"<<i+1<<": ";
  	solve();
  }
  return 0;
}