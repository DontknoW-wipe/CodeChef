/*

	SnackDown Practice Contest: Beginner

	https://www.codechef.com/SDPCB21/problems/TEMPLELA

	Temple Land

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
	vector<int> a(101);
	int maxE=0;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		a[x]++;
		maxE=max(maxE,x);
	}
	if(a[maxE]!=1)
	{
		cout<<"no"<<endl;
		return;
	}
	for(int i=1;i<maxE;i++)
	{
		if(a[i]!=2)
		{
			cout<<"no"<<endl;
			return;
		}
	}
	cout<<"yes"<<endl;
	return;

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