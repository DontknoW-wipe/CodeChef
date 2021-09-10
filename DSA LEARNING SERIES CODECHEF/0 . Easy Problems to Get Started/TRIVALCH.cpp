/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/TRIVALCH
	
  Valid Triangle Or Not
	
  Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a+b<=c||a+c<=b||b+c<=a)
  {
    cout<<"NO"<<endl;
  }
  else{
    cout<<"YES"<<endl;
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