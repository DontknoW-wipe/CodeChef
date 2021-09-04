#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	int x,res=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		res=(x%10);
	}
	if(res==0)
	{
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
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