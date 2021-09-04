#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int res1=0,reV=0;
	for(int i=0;i<n;i++)
	{
		int y=a[i];
		int res=0;
		for(int j=0;j<n;j++)
		{
			int temp=y^a[j];
			res=res|temp;
		}
		if(res<reV)
		{
			reV=res;
			res1=y;
		}
	}
	cout<<res1<<" "<<reV<<endl;
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