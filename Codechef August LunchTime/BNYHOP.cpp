/*

  https://www.codechef.com/LTIME99B/problems/BNYHOP

  Bunny Hops 

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
  ll p[n-1],a[n];
  for(int i=0;i<n-1;i++) cin>>p[i];
  for(int i=0;i<n;i++) cin>>a[i];
  
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