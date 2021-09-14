/*

	SnackDown Practice Contest: Beginner

	https://www.codechef.com/SDPCB21/problems/TYPING

	Chef and Typing

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
  double res1=0.00;
  map<string,double> mp;
  while(n--)
  {
    double res=0.00;
    int left;
    string s;
    cin>>s;
    if(mp[s]>0)
    {
      res1+=(mp[s]/2);
      continue;
    }
    if(s[0]=='d'||s[0]=='f')
    {
      left=1;
    }
    else{
      left=0;
    }
    for(int i=0;i<s.size();i++)
    {
      if(i==0)
      {
        // cout<<0.2<<" ";
        res+=(0.2);
        continue;
      }
      if(s[i]=='d'||s[i]=='f')
      {
        if(left==1)
        {
          // cout<<0.4<<" ";
          res+=(0.4);
        }
        else{
          // cout<<0.2<<" ";
          res+=(0.2);
        }
        left=1;
      }
      else{
        if(left==0)
        {
          // cout<<0.4<<" ";
          res+=(0.4);
        }
        else{
          // cout<<0.2<<" " ;
          res+=(0.2);
        }
        left=0; 
      }
    }
    mp[s]=res;
    // cout<<res<<endl;
    res1+=res;
  }
  cout<<(res1*10)<<endl;
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