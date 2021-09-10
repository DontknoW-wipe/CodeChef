/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/RNGEODD
	
	Raju and His Trip
	
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
  if(n%5==0 or n%6==0)
  {
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
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