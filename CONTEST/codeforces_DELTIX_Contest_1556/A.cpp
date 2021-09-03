/*
  https://codeforces.com/contest/1556/problem/A

  A. A Variety of Operations

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);
bool checkVowel(char c)
{
	if(c=='A'||c=='I'||c=='O'||c=='U'||c=='E') return true;
	return false;
}
void solve()
{
  ll c,d;
  cin>>c>>d;
  if(c==d)
  {
    if(c)
    {
      cout<<"1"<<endl;
    }
    else{
      cout<<"0"<<endl;
    }
  }
  else if((c+d)%2==0)
  {
    cout<<"2"<<endl;
  }
  else{
    cout<<"-1"<<endl;
  }
}
int main()
{
  speed_karo
  int t;cin>>t;
  for (int i = 0; i < t; ++i)
  {
  	// cout<<"Case #"<<i+1<<": ";
  	solve();
  }
  return 0;
}