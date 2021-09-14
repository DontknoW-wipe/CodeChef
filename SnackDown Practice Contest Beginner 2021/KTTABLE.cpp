/*

	SnackDown Practice Contest: Beginner

	https://www.codechef.com/SDPCB21/problems/KTTABLE

	Kitchen Timetable

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
	vector<ll> a(n),b(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int res=0;
	ll fg=0;
	for(int i=0;i<n;i++)
	{
		ll fgh=(a[i]-fg);
		if(fgh>=b[i])
		{
			res++;
		}
		fg=a[i];
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