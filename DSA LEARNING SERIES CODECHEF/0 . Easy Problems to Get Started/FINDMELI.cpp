/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/FINDMELI
	
  Find Me
	
  Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  int n,k,x;
  int res=-1;
  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    if(x==k)
    {
      res=1;
    }
  }
  cout<<res<<endl;

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