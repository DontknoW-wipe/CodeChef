#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int solve()
{
	int p,q;
	cin>>p>>q;
	int c=0;
	while(p>0&&q>0)
	{
		if(p>q)
		{
			p=p-q;
		}
		else if(p<q)
		{
			q=q-p;
		}
		else{
			p=p-q;
		}
		c++;
	}
	return c;
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cout<<solve()<<endl;
	}
    return 0;
}
