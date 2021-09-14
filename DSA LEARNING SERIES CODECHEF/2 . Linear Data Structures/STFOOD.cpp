/*

	DSA Learning Series - Week 2

	https://www.codechef.com/LRNDSA02/problems/STFOOD

	Chef and Street Food

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	int maxProfit=0,s,p,v;
	for(int i=0;i<n;i++)
	{
		cin>>s>>p>>v;
		maxProfit=max(maxProfit,((p/(s+1))*v));
	}
	cout<<maxProfit<<endl;	
}
int main()
{
  SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB
  int t=1;cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}