/*

  https://www.codechef.com/START10B/problems/SIGNFLIP

  Maximise the Subsequence Sum

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
  int n,k;
  cin>>n>>k;
  int a[n];
  vector<int> v;
  int sum=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]<0)
    {
      v.push_back(a[i]);
    }
    else{
      sum+=a[i];
    }
  }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();i++)
  {
    if(k>0)
    {
      v[i]=-v[i];
      sum+=v[i];
    }
    k--;
  }
  cout<<sum<<endl;

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