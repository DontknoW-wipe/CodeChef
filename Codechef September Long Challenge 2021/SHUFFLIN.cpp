/*

  https://www.codechef.com/SEPT21B/problems/SHUFFLIN

  Shuffling Parities

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
  vector<ll> a(n);
  int odd=0,even=0;
  // cout<<odd<<" "<<even<<endl;
  int oddA=0,evenA=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(i%2==0)
    {
      oddA++;
    }
    else{
      evenA++;
    }
    if(a[i]%2==0)
    {
      even++;
    }
    else{
      odd++;
    }
  }
  // cout<<odd<<" "<<even<<endl;
  // cout<<oddA<<" "<<evenA<<endl;
  // cout<<endl;
  int y1=min(oddA,even);
  int y2=min(evenA,odd);
  cout<<y1+y2<<endl;
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