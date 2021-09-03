/*
  https://codeforces.com/contest/1556/problem/B

  B. Take Your Places!

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
  int n;
  cin>>n;
  vector<ll> a(n);
  int odd=0,even=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]%2==0)
    {
      even++;
    }
    else{
      odd++;
    }
  }
  if(n==1)
  {
    cout<<0<<endl;
    return;
  }
  if((odd==0&&even>0)||(odd>0&&even==0))
  {
    cout<<-1<<endl;
    return ;
  }
  if(abs(odd-even)<=1)
  {
    int res=0;
    if(a[0]%2==0)
    {
      for(int i=1;i<n;i++)
      {
        if(i%2==1&&a[i]%2!=)
        {

        }
      }
    }
    else{

    }
  }
  else{
    cout<<-1<<endl;
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