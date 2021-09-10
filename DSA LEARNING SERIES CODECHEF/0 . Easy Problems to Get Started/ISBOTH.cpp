/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/ISBOTH
	
	Is Both Or Not
	
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
  if(n%11==0&&n%5==0)
  {
    cout<<"BOTH"<<endl;
  }
  else if((n%11==0&&n%5!=0)||(n%11!=0&&n%5==0))
  {
    cout<<"ONE"<<endl;
  }
  else{
    cout<<"NONE"<<endl;
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