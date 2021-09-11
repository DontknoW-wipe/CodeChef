/*

	1 . Complexity Analysis + Basics Warm Up
	
	DSA Learning Series - Contest 1

	https://www.codechef.com/LRNDSA01/problems/FCTRL

	Factorial  

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ll64 int64_t
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	ll64 five=5,two=2,sum=0,sum1=0;
	int h=n;
	while(h/five!=0)
	{
		sum+=(h/five);
		five=five*5;
	}
	while(h/two!=0)
	{
		sum1+=(h/two);
		two=two*2;
	}
	if(sum<sum1)
	{
		cout<<sum<<endl;
	}
	else{
		cout<<sum1<<endl;
	}
	// cout<<sum<<endl;
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