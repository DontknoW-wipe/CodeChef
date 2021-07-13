#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	int n,k;
 	cin>>n>>k;
 	int a[n];
 	for(int i=0;i<n;i++)
 	{
 	    cin>>a[i];
 	}
 	int b[33]={0};
 	for(int i=0;i<n;i++)
 	{
 	    int y=a[i];
 	    int j=0;
 	    while(y>0)
 	    {
 	        if(y%2==1)
 	        {
 	            b[j]++;
 	        }
 	        y=y/2;
 	        j++;
 	    }
 	}
 	int res=0;
 	for(int i=0;i<33;i++)
 	{
 	    if(b[i]%k==0)
 	    {
 	        res+=b[i]/k;
 	    }
 	    else{
 	        res+=b[i]/k+1;
 	    }
 	}
 	cout<<res<<endl;
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
