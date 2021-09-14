/*

	DSA Learning Series - Week 2

	https://www.codechef.com/LRNDSA02/problems/PSHOT

	Penalty Shoot-Out II

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
	string s;
	cin>>s;
	ll c1=0,c2=0,c1miss=0,c2miss=0;
	for(int i=0;i<2*n;i++)
	{
		if(c1==n-1&&c2miss>=2)
		{
			cout<<i<<endl;
			return;
		}
		if(c2==n-1&&c1miss>=2)
		{
			cout<<i<<endl;
			return;
		}
		if(i%2==0)
		{
			if(s[i]=='1')
			{
				c1++;
			}
			else{
				c1miss++;
			}
		}
		else{
				if(s[i]=='1')
				{
					c2++;
				}
				else{
					c2miss++;
				}
		}
	}
	cout<<2*n<<endl;
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