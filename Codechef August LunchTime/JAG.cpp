/*

  https://www.codechef.com/LTIME99B/problems/JAG

  Just a Graph

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
  ll n;
  cin>>n;
  ll w[n];
  map<ll,ll> mp;
  for(int i=0;i<n;i++) cin>>w[i];
  for(int i=0;i<n;i++) mp[w[i]-i-1]++;
  for(auto it=mp.begin();it!=mp.end();it++)
  {
    cout<<it->first<<" "<<it->second<<endl;
  }
  cout<<endl;
  if(mp[w[0]-1]==n)
  {
    cout<<n<<endl;
  }
  else{
    cout<<1<<endl;
  }
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