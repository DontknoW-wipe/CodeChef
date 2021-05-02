#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
 	int m,s;
 	cin>>m>>s;
	if(s==0)
	{
		cout<<m<<endl;
		return ;
	}
	cout<<m/s<<endl;
	return ;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
