/*

  https://www.codechef.com/LTIME99B/problems/CROSBLK

  Crossing Blocks

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
  ll a[n];
  for(ll i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int me=a[0];
  for(int i=1;i<n;i++)
  {
    if(a[i]>me)
    {
      cout<<-1<<endl;
      return;
    }
  }
  stack<ll> s;
  for(int i=1;i<n;i++)
  {
    while(s.size()>0&&s.top()<=a[i])
    {
      s.pop();
    }
    s.push(a[i]);
  }
  cout<<s.size()<<endl;
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