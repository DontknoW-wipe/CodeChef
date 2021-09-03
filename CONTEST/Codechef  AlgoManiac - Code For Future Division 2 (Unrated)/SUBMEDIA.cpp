/*

  https://www.codechef.com/CDMN21B/problems/SUBMEDIA

  Meet In The Median

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KARO ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 int n,k,l;
 cin>>n>>k;
 vector<pair<ll,ll>> v(n);
 for(int i=0;i<n;i++)
 {
  ll x;
  cin>>x;
  v[i].first=x;
  v[i].second=i;
 }
 sort(v.begin(),v.end());
 for(int i=0;i<n;i++)
 {
  cout<<v[i].first<<" "<<v[i].second<<endl;
 }

}
int main()
{
  SPEED_KARO
  int t;cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}