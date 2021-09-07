/*

	TRY TO CODE

	https://www.codechef.com/TRYC2021/problems/TRYTOCQ5

	Question5

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);
bool isprime(ll i)
{
	if(i<=1)
	{
		return false;
	}
	if(i<=3)
	{
		return true;
	}
	if(i%2==0||i%3==0)
	{
		return false;
	}
    for (int j = 5; j * j <= i; j += 6)
    {
   		 if (i % j == 0 || i % (j + 2) == 0)
   		 {
   		 	return false;
   		 }        
    }
   	return true;
}
void solve()
{
	ll n,m;
	cin>>n>>m;
	vector<ll> v;
	for(ll i=n;i<=m;i++)
	{
		if(isprime(i))
		{
			v.push_back(i);
		}
	}
	ll res=0;
	for(ll i=0;i<v.size();i++)
	{
		// cout<<v[i]<<" ";
		if(abs(v[i]-v[i+1])==2)
		{
			res++;
		}
	}
	cout<<res<<endl;
}
int main()
{
  SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB
  int t=1;//cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}