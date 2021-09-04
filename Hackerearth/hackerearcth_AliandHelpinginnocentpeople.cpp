#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	string s;
	cin>>s;
	if(s[2]=='A'&&s[2]=='I'&&s[2]=='O'&&s[2]=='U'&&s[2]=='E'&&s[2]=='Y')
	{
		cout<<"invalid"<<endl;
		return;
	}
	int s1=(s[0]-'0')+(s[1]-'0');
	int s2=(s[3]-'0')+(s[4]-'0');
	int s3=(s[4]-'0')+(s[5]-'0');
	int s4=(s[7]-'0')+(s[8]-'0');
	if(s1%2==0&&s2%2==0&&s3%2==0&&s4%2==0)
	{
		cout<<"valid"<<endl;
	}
	else{
		cout<<"invalid"<<endl;
	}
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