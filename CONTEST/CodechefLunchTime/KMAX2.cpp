/*
  https://www.codechef.com/LTIME99B/problems/KMAX2

  K-th Maximum

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  ll n,k;
  cin>>n>>k;
  ll a[n+1];
  for(int i=1;i<=n;i++) cin>>a[i];
  int maxE=INT_MIN,index=0;
  for(int i=1;i<=n;i++)
  {
    if(maxE<a[i])
    {
      index=i;
      maxE=a[i];
    }
  }
  int res=0;
  for(int i=1;i<=n;i++)
  {
    int g=i+k-1;
    if(g<=n)
    {
      if(a[g]==maxE)
      {
        res++;
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