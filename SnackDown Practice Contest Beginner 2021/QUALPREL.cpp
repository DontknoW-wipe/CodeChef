/*

	SnackDown Practice Contest: Beginner

	https://www.codechef.com/SDPCB21/problems/QUALPREL

	Qualifying to Pre-Elimination

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n,k;
	cin>>n>>k;
	vector<ll> s(n);
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	sort(s.rbegin(),s.rend());
	int res=0,dp=s[k-1];
	for(int i=0;i<n;i++)
	{
		if(s[i]>=dp)
		{
			res++;
		}
		else{
			break;
		}
	}
	cout<<res<<endl;

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