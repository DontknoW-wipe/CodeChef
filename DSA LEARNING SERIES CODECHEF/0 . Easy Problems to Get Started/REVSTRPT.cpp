/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/REVSTRPT
	
  Reverse Star Pattern
	
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
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<(n-i);j++)
    {
      cout<<" ";
    }
    for(int j=0;j<i;j++)
    {
      cout<<"*";
    }
    cout<<endl;
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