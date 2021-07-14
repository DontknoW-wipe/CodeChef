#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n;
	cin>>n;
	int c=0;
	while(n>0)
	{
	    if(n%10==4)
	    {
	        c++;
	    }
	    n=n/10;
	}
	cout<<c<<endl;
}

int main()
{	speed_karo
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
