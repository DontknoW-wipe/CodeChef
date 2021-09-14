/*

	SnackDown Practice Contest: Beginner

	https://www.codechef.com/SDPCB21/problems/SNAKPROC

	Snake Procession

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define SPEED_KAR_DO_YAAR_AB_BAHUT_HUWA_AB ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int l;
  cin>>l;
  string s;
  cin>>s;
  char test='g';
  for(int i=0;i<l;i++)
  {
    if(s[i]!='.')
    {
      if(test=='g'&&s[i]!='H')
      {
        cout<<"Invalid"<<endl;
        return;
      }
      if(s[i]==test)
      {
        cout<<"Invalid"<<endl;
        return;
      }
      test=s[i];
    }
  }
  if(test!='T'&&test!='g')
  {
    cout<<"Invalid"<<endl;
    return;
  }
  cout<<"Valid"<<endl;
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