#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int l,n,w,h;
	cin>>l;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>w>>h;
		if(w==l&&h==l)
		{
			cout<<"ACCEPTED"<<endl;
		}
		else if(w>l&&h>l)
		{
			cout<<"CROP IT"<<endl;
		}
		else{
			  	cout<<"UPLOAD ANOTHER"<<endl;
		}
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