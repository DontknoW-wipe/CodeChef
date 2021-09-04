#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n,q;
	cin>>n>>q;
	vector<pair<double,double>> xy,vt;
	double x,y;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		xy.push_back({x,y});
	}
	for(int i=0;i<q;i++)
	{
		cin>>x>>y;
		vt.push_back({x,y});
	}
	vector<pair<double,double>> res;
	pair<double,double> y11,y22,y33;
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
		{
			y11=xy[i];
			y22=xy[0];
			y33=xy[1];
		}
		else if(i==n-2)
		{
			y11=xy[i];
			y22=xy[i+1];
			y33=xy[0];			
		}
		else{
			y11=xy[i];
			y22=xy[i+1];
			y33=xy[i+2];	
		}


	}
	cout<<endl;

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



/*
	Sample Input 1

	2
	4 1
	1 1
	2 1
	2 2
	1 2
	1 1
	3 2
	1 1
	2 1
	1 2
	1 1
	2 3

	Sample Output 1

	9.0000000
	9.7426406
	230.8086578



*/