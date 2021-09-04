#include<bits/stdc++.h>
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
	string result="";
	for(int i=0;i<n;i++)
	{
		int r=0,y=a[i];
		if(i<n/2)
		{
			while(y>0)
			{
				r=y%10;
				y=y/10;
			}
		}
		else{
			r=y%10;
		}
		result+=char(r+'0');
	}
	int res1=0,res2=0;
	for(int i=0;i<result.size();i++)
	{
		int y=result[i]-'0';
		if(i%2==0)
		{
			res1+=y;
		}
		else{
			res2+=y;
		}
	}
	int res=abs(res1-res2);
	if(res%11==0)
	{
		cout<<"OUI"<<endl;
	}
	else{
		cout<<"NON"<<endl;
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