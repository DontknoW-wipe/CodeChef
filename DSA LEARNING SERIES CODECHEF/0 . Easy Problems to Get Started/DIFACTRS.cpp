/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/DIFACTRS
	
	Factors Finding
	
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
  vector<int> v;
  for(int i=1;i<=n;i++)
  {
    if(n%i==0)
    {
      v.push_back(i);
    }
  }
  cout<<v.size()<<endl;
  for(auto x:v)
  {
    cout<<x<<" ";
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