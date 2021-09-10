/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/REVMEE
	
  Reverse Me	
	
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
  vector<int> v(n);
  for(int i=n-1;i>=0;i--)
  {
    cin>>v[i];
  }
  for(int i=0;i<n;i++)
  {
    cout<<v[i]<<" ";
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