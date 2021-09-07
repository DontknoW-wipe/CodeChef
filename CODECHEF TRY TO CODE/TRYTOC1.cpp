/*

	TRY TO CODE

	https://www.codechef.com/TRYC2021/problems/TRYTOC1

	Question1

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
	int spaceline=n-1;
	int start=1,end=1;
	for(int l=0;l<n;l++)
	{
		// cout<<spaceline<<endl;
		for(int i=0;i<spaceline;i++)
		{
			cout<<" ";
		}
		for(int i=start;i<=end;i++)
		{
			cout<<"i ";
		}
		cout<<endl;
		end++;
		spaceline--;
	}
	start=1;
	end=n;
	spaceline=0;
	for(int l=0;l<n;l++)
	{
		// cout<<spaceline<<endl;
		for(int i=0;i<spaceline;i++)
		{
			cout<<" ";
		}
		for(int i=start;i<=end;i++)
		{
			cout<<"i ";
		}
		cout<<endl;
		end--;
		spaceline++;
	}
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