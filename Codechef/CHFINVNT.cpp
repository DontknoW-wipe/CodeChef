#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define speed_karo ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve()
{
 	int n,p,k;
 	cin>>n>>p>>k;
   	int mod = p%k;
    int cd = ceil((float)n/(float)k);
    int y1=n%k;
	int pd = (p-mod)/k + 1;
    int res= 0;
    if(y1>0) 
    {
    	if(mod+1<=y1)
    	{
    		res=mod*cd+pd;
    	}
    	else{
    		res=y1*cd +(mod-y1)*(cd-1)+pd;
    	}
    }
    else 
    {
    	res  = mod * cd + pd;	
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