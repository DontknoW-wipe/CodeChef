/*

	1 . Complexity Analysis + Basics Warm Up
	
	DSA Learning Series - Contest 1

	https://www.codechef.com/LRNDSA01/problems/ZCO14003

	Smart Phone 

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ll64 int64_t
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	ll64 n;
	cin>>n;
	vector<ll64> v(n);
	for(ll64 i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());

	for(int i=0;i<n;i++)
	{
		v[i]=v[i]*(n-i);
	}

	sort(v.begin(),v.end());
	cout<<v[n-1]<<endl;

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