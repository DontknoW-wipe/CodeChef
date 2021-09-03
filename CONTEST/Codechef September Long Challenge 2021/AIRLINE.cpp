/*

  https://www.codechef.com/SEPT21B/problems/AIRLINE

  Airline Restrictions

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  int a,b,c,d,e;
  cin>>a>>b>>c>>d>>e;
  if((a+b<=d&&c<=e)||(a+c<=d&&b<=e)||(b+c<=d&&a<=e))
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
  int t=1;cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}