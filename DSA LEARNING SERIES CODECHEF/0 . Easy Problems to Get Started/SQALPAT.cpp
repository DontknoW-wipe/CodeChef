/*

	0 . Easy Problems to Get Started

	https://www.codechef.com/CCSTART2/problems/SQALPAT

	Alternative Square Pattern

  Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll64 int64_t
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
  int n;
  cin>>n;
  int y1=1;
  for(int i=1;i<=n;i++)
  {
    if(i%2==1)
    {
      int timer=5;
      while(timer--)
      {
        cout<<y1<<" ";
        y1++;
      }
    }
    else{
      y1=i*5;
      int timer=5;
      while(timer--)
      {
        cout<<y1<<" ";
        y1--;
      }
      y1=i*5;
      y1++;
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