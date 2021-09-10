/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/RNGEODD
	
	Range Odd
	
	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  int l,r;
  cin>>l>>r;
  for(int i=l;i<=r;i++)
  {
    if(i%2==1)
    {
      cout<<i<<" ";
    }
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