#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
	int n,m;
	cin>>n>>m;
	int flag=0;
	map<int,int> m1,m2;
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		if(flag==1)
		{
			continue;
		}
		if(i==0)
		{
			m1[x]++;
			m2[y]++;
		}
		else{
			if((m1[x]>0&&m1[y]>0)||(m2[x]>0&&m2[y]>0))
			{
				flag=1;
			}
			else{
				if(m1[x]>0)
				{
					m1[x]++;
					m2[y]++;
				}
				else if(m2[x]>0)
				{
					m2[x]++;
					m1[y]++;
				}
				else{
					flag=1;
				}
			}
		}
	}
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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