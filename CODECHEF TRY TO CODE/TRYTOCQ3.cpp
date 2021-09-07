/*

	TRY TO CODE

	https://www.codechef.com/TRYC2021/problems/TRYTOCQ3

	Question3

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
	int a[26]={0};
	char curr=s[0];
	for(int i=0;i<n;i++)
	{
		if(curr==s[i])
		{
			a[curr-'A']++;
		}
		else if(curr!=s[i])
		{
			curr=s[i];
			if(a[curr-'A']>0)
			{
				cout<<"NO"<<endl;
				return;
			}
			else{
				a[curr-'A']++;
			}
		}
	}
	cout<<"YES"<<endl;
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