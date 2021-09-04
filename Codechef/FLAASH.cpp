#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);
void solve()
{
	int n;
	cin>>n;
	int res=0;
	while(n>1)
	{
		if(n%2==0&&n%3==0)
		{
			res+=2;
			n=n/2;
			n=n/3;
		}
		else //if(n%2==0)
		{
			n--;
		}
	}
	cout<<res<<endl;
}
int main()
{
  speed_karo
  int t;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}