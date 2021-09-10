/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/SUMEVOD
	
  Sum Is Everywhere
	
  Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll64 int64_t
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  ll64 n;
  cin>>n;
  ll64 oddsum=0,evensum=0;
  for(ll64 i=1;i<=2*n;i++)
  {
    if(i%2==0)
    {
      evensum+=i;
    }
    else{
      oddsum+=i;
    }
  }
  cout<<oddsum<<" "<<evensum<<endl;
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