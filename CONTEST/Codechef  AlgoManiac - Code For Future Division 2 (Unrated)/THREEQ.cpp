/*

  https://www.codechef.com/CDMN21B/problems/THREEQ

  The Old Saint And Three Questions

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KARO ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  int A1,A2,A3,B1,B2,B3;
  cin>>A1>>A2>>A3;
  cin>>B1>>B2>>B3;
  if(A1+A2+A3==B1+B2+B3)
  {
    cout<<"Pass"<<endl;
  }
  else{
    cout<<"Fail"<<endl;
  }
}
int main()
{
  SPEED_KARO
  int t;cin>>t;
  while(t--)
  {
  	solve();
  }
  return 0;
}