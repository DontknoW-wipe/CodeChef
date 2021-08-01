#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int x,y;
	cin>>x>>y;
	int res=0;
	if(__gcd(x,y)>1)
	{
		cout<<0<<endl;
	}
	else if((__gcd(x+1,y)>1)||(__gcd(x,y+1)>1))
	{
		cout<<1<<endl;
	}
	else{
		cout<<2<<endl;
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
