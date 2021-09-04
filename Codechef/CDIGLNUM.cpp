#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define un_ll unsigned long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

int main()
{
	speed_karo
	un_ll t;
	cin>>t;
	// cout<<t<<endl;
	un_ll fact[101];
	fact[0]=1;
	for(un_ll i=1;i<=100;i++)
	{
		fact[i]=i*fact[i-1];
		// cout<<fact[i]<<endl;
	}
	vector<un_ll> d(10000000);
	d[0]=0;
	for(un_ll i=1;i<10000000;i++)
	{
		// cout<<i<<endl;
		un_ll re=d[i-1];
		if(i<=9)
		{
			re++;
		}
		else{
			un_ll g=i,c=0,res=1;
			while(g>0)
			{
				res*=(g%10);
				c++;
				g=g/10;
			}
			if(res>=fact[c])
			{
				re++;
			}
		}
		d[i]=re;
	}
	while(t--)
	{
		un_ll n;
		cin>>n;
		cout<<d[n]<<endl;
	}
  return 0;
}