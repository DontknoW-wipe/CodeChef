/*

	1 . Complexity Analysis + Basics Warm Up
	
	DSA Learning Series - Contest 1

	https://www.codechef.com/LRNDSA01/problems/CONFLIP
	
	Coin Flip

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ll64 int64_t
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int g;
	cin>>g;
	for(int l=0;l<g;l++)
	{
		int I,N,Q;
		cin>>I>>N>>Q;
		int res=N/2;
		if(I==Q or N%2==0)
		{
			cout<<res<<endl;
		}
		else{
		cout<<res+1<<endl;

		}
	}	
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