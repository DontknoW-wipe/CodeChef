/*

  https://www.codechef.com/SEPT21B/problems/TRAVELPS

  Travel Pass

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  int N,A,B;
  cin>>N>>A>>B;
  string S;
  cin>>S;
  int res=0;
  for (int i = 0; i < N; ++i)
  {
    if( S[i] == '0')
    {
      res += A ;
    }
    else{
      res += B;
    }
  }
  cout << res << endl ;
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