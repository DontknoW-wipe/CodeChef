/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/EXTRICHK
	
  Triangle Everywhere
	
  Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll64 int64_t
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a+b<=c||b+c<=a||c+a<=b)
  {
    cout<<-1<<endl;
  }
  else{
    if(a==b&&b==c)
    {
      cout<<1<<endl;
    }
    else if((a==b&&b!=c)||(b==c&&c!=a)||a==c&&c!=b)
    {
      cout<<2<<endl;
    }
    else{
      cout<<3<<endl;
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