#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]-=32;
		}
		else if(s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
		}
	}
	cout<<s<<endl;
}
int main()
{
  speed_karo
  // int t;cin>>t;
  // while(t--)
  // {
    solve();
  // }
  return 0;
}