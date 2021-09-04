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
	int b[100001][2]={0};
	for(int i=2;i<=100000;i++)
	{
		b[i][0]=1;
		b[i][1]=i-1;
		// cout<<i<<" ("<<b[i][0]<<","<<b[i][1]<<")"<<endl;
	}
	set<pair<int,int>> se;
	for(int i=0;i<n;i++)
	{
		int y=a[i];
		if(b[y][0]==b[y][1])
		{
			se.insert(make_pair(b[y][0],b[y][1]));
		}
		else
		{
			se.insert(make_pair(b[y][0],b[y][1]));
			b[y][0]++;
			b[y][1]--;	
		}
	}
	cout<<se.size()<<endl;

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