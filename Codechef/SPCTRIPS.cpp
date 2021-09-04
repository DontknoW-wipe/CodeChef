#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int a[n];
	int sum=0,sum1=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		sum1^=a[i];
	}
		for(int i=0;i<=k;i++)
	{
		cout<<i<<" : "<<(sum1^i)<<endl;
	}
	for(int i=0;i<=k;i++)
	{
		sum=0;
		for(int j=0;j<n;j++)
		{
			sum+=(i^a[j]);
			// cout<<sum<<" ";
		}
		cout<<i<<" "<<sum<<endl;
		sum=0;
	}

}
int main()
{
  speed_karo
  int t;cin>>t;
  // vector<int> v;
  while(t--)
  {
    solve();
  }
  return 0;
}