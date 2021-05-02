#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
 	int64_t n,a,b;
 	cin>>n>>a>>b;
 	string s;
 	int64_t sar=0,anu=0;
 	for(int64_t i=0;i<n;i++)
 	{
 		cin>>s;
 		if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X')
 		{
 			sar+=a;
 		}
 		else{
 			anu+=b;
 		}
 	}
 	if(sar>anu)
 	{
 	    cout<<"SARTHAK"<<endl;
 	}
 	else if(sar<anu)
 	{
 	    cout<<"ANURADHA"<<endl;
 	}
 	else{
 	    cout<<"DRAW"<<endl;
 	}
 	
 	
}
int main()
{
    int64_t t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
