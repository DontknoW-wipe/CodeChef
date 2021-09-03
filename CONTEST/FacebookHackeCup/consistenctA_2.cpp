/*

	https://www.facebook.com/codingcompetitions/hacker-cup/2021/qualification-round/problems/A2
	
	Problem A1: Consistency - Chapter 2

	Code Submitted By : Kamal Murmu
  
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);
bool checkVowel(char c)
{
	if(c=='A'||c=='I'||c=='O'||c=='U'||c=='E')
	{
		return true;
	}
	return false;
}
void go(string s,vector<string> &v,int i,int k,vector<int> &v1,int sum,int n)
{
  if(i==k)
  {
    cout<<s<<" "<<sum<<endl;
    return; 
  }
  string g=s;
  int res=0;
  for(int j=0;j<n;j++)
  {
    if(s[j]==v[i][0])
    {
      s[j]=v[i][1];
      res++;
    }
  }
  if(res>0)
  {
    s+=':';
    s+=v[i][0];
    s+=v[i][1];
    
  }
  // cout<<v[i][0]<<" "<<v[i][1]<<" : "<<s<<" "<<g<<endl;
  go(s,v,i+1,k,v1,sum+res,n);
  go(g,v,i+1,k,v1,sum,n);
}
void solve()
{
  string s;
  cin>>s;
  int k;
  cin>>k;
  vector<string> v(k);
  for(int i=0;i<k;i++)
  {
    cin>>v[i];
  }
  vector<int> v1;
  cout<<endl;
  go(s,v,0,k,v1,0,s.size());
  if(v1.size()==0)
  {
    cout<<-1<<endl;
    return;
  }
  // for(int i=0;i<v1.size();i++)
  // {
  //   cout<<v1[i]<<endl;
  // }
  cout<<"\n";
}
int main()
{
  speed_karo
  int t;cin>>t;
  for (int i = 0; i < t; ++i)
  {
  	cout<<"Case #"<<i+1<<": ";
  	solve();
  }
  return 0;
}