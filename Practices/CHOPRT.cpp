#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	ll a,b;
	cin>>a>>b;
	if(a>b)
	{
		cout<<">"<<endl;
	}
	else if(a<b)
	{
		cout<<"<"<<endl;
	}
	else{
		cout<<"="<<endl;
	}
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
