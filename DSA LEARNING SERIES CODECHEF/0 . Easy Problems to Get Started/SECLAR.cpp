/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/SECLAR
	
	Find Second Largest
	
	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  int a,b,c;
  cin>>a;
  cin>>b;
  cin>>c;
  if((a<b&&b<c)||(a>b&&b>c))
  {
    cout<<b<<endl;
  }
  else if((a<c&&c<b)||(a>c&&c>b))
  {
    cout<<c<<endl;
  }
  else{
    cout<<a<<endl;
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